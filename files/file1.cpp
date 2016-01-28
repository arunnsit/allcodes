#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct invntry{
       int itemno,qty;
       char name[20];
};

void addData(){
     FILE *fp;
     struct invntry obj;

     fp = fopen("invntry.txt","a+t");
    // system("cls");
     cout<<"\n*****ADDING DATA*****\n";
     cout<<"\nEnter Item No : ";
     cin>>obj.itemno;
     cout<<"Enter Item Name : ";
     //fflush(stdin);
     cin>>obj.name;
     cout<<"Enter quantity : ";
     cin>>obj.qty;
     //fflush(stdin);
    // fscanf(stdin,"%d %s %d",&obj.itemno,obj.name,&obj.qty);
     fprintf(fp,"%d %s %d",obj.itemno,obj.name,obj.qty);
     fclose(fp);
}

void showRecord(){
     FILE *fp;
     struct invntry obj;
     int itno;
     long pos;
     fp = fopen("invntry.txt","r");
    // system("cls");
     cout<<"\n*****SHOWING SPECIFIC RECORD*****\n";
     cout<<"\nEnter Item No : ";
     cin>>itno;
     pos = itno * sizeof(obj);
     fseek(fp,pos,SEEK_SET);
     if(feof(fp)==0)
    cout<<"\n\nNO DATA FOUND\n";
     else{
     fscanf(fp,"%d %s %d",&obj.itemno,obj.name,&obj.qty);
     printf("\n\n\tItem No :  %d\n",obj.itemno);
     printf("\tName : %s\n",obj.name);
     printf("\tQuantity  : %d\n",obj.qty);
     }
     getchar();
     fclose(fp);
}

void alterData()
{
    FILE *fp;
     struct invntry obj;
     int itno;
     long pos;
     fp = fopen("invntry.txt","r");
    // system("cls");
     cout<<"\n*****EDITING SPECIFIC RECORD*****\n";
     cout<<"\nEnter Item No : ";
     cin>>itno;
     pos = (itno-1)*sizeof(obj);
     fseek(fp,pos,SEEK_SET);
     if(feof(fp)==0)
    cout<<"\n\nNO DATA FOUND\n";
     else{
     cout<<"\nEnter Item No : ";
     cin>>obj.itemno;
     cout<<"Enter Item Name : ";
     //fflush(stdin);
     cin>>obj.name;
     cout<<"Enter quantity : ";
     cin>>obj.qty;
     //fflush(stdin);
    // fscanf(stdin,"%d %s %d",&obj.itemno,obj.name,&obj.qty);
     fprintf(fp,"%d %s %d",obj.itemno,obj.name,obj.qty);
     }
     getchar();
     fclose(fp);
}
void delData()
{
    FILE *fp,*f2;
     struct invntry obj;
     int itno;
     long pos;
     fp = fopen("invntry.txt","r");
     f2 = fopen("temp.txt","w");
    // system("cls");
     cout<<"\n*****DELETING SPECIFIC RECORD*****\n";
     cout<<"\nEnter Item No : ";
     cin>>itno;
     fscanf(fp,"%d %s %d",&obj.itemno,obj.name,&obj.qty);
     while(obj.itemno!=itno)
     {
     	fprintf(f2, "%d %s %d",obj.itemno,obj.name,obj.qty);
     	fscanf(fp,"%d %s %d",&obj.itemno,obj.name,&obj.qty);
     }
     fscanf(fp,"%d %s %d",&obj.itemno,obj.name,&obj.qty);
     while(obj.itemno!=EOF)
     {
     	fprintf(f2, "%d %s %d",obj.itemno,obj.name,obj.qty);
     	fscanf(fp,"%d %s %d",&obj.itemno,obj.name,&obj.qty);
     }
     rename("temp.txt","invntry.txt");
     getchar();
     fclose(fp);
}

int main(){

     int choice;
     //system("cls");

     while(1){
     // system("cls");
      cout<<"   INVENTORY_DATA\r\n";
      cout<<"\n\n*****CHOOSE YOUR CHOICE*****\n";
      cout<<"1) ADD DATA\n";
      cout<<"2) DELETE DATA\n";
      cout<<"3) SHOW RECORD\n";
      cout<<"4) ALTER DATA\n";
      cout<<"5) EXIT \n";
      cout<<"Enter your choice : ";
      scanf("%d",&choice);
      getchar();
      switch(choice){
         case 1 : addData(); break;
         case 2 :  delData(); break;
         case 3 :  showRecord(); break;
         case 4 :  alterData(); break;
         case 5 :  exit(0);
       }
     }
     return 0;
}