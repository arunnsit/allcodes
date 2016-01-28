#include<stdio.h>
char a[1000006];
//int l[1000006]={0},o[1000006]={0},lo[1000006]={0};
int main(){
    int t,i;
    scanf("%d",&t);
    while(t){long long int l=0,o=0,await1=0,await2=0,sol=0;
       scanf("%s",&a);
      for(i=0;a[i]!='\0';i++){
        if(a[i]=='L'){
                sol+=await1;
        //await1=0;
                l++;}
        if(a[i]=='O'){
                await1+=l;
                await2+=l;
      }

    }

    printf("%lld\n",sol);
t--;}}
