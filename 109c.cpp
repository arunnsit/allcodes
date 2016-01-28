#include<stdio.h>
char a[1000008];
int main(){
    int i=0,j,n;
    scanf("%d",&n);
    while(n>0){
        if(n%7==0){while(n>0){a[i]='7';i++;n-=7;}}
        else {
         a[i]='4';i++;
         n-=4;
        }
    }a[i]='\0';
   if(n==0) printf("%s\n",a);
   else printf("-1\n");


}
