#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int k[1002]={0};
int main(){
    int n,e,i,j,l,open=0;char a[200],ch,b[]="CLOSEALL\0";
    scanf("%d %d",&n,&e);scanf("%c",&ch);
    while(e){
        cin.getline(a,200);
        if(strcmp(a,b)==0){
            for(i=0;i<=1001;i++)k[i]=0;
            open=0;
        }
        else{
        for(i=0;a[i]!='\0';i++){if(a[i]==' ')break;}
        i++;int o=0;
        for(;a[i]!='\0';i++){
            o=o*10+a[i]-48;
        }
        if(k[o]==0){k[o]=1;open++;}
        else{k[o]=0;open--;}

        }
e--;printf("%d\n",open);
    }

}
