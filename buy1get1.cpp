#include<stdio.h>
#include<string.h>
int main(){char a[256];int d,b,p,l,t,coun;
scanf("%d",&t);while(t){coun=0;int m[150]={0};
scanf("%s",&a);
l=strlen(a);
for(d=0;d<l;d++){p=a[d]-48;m[p]++;}
for(p=0;p<150;p++){if((m[p]%2)==0){m[p]/=2;} else if((m[p]%2)!=0){m[p]=m[p]/2+1;}coun+=m[p];}
printf("%d\n",coun);
t--;


}}
