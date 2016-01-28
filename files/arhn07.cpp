#include<stdio.h>
#include<string.h>
int main(){
int l,t,l2,i,coun;char a[2000],b[2000];
scanf("%d",&t);
while(t){
        scanf("%s %s",&a,&b);coun=0;
l=strlen(a);
l2=strlen(b);
if(l!=l2){printf("-1\n");}
else{for(i=0;i<l;i++){if(a[i]!=b[i]){coun++;}}printf("%d\n",coun);}

t--;}

}
