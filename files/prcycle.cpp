#include<stdio.h>
int main(){int a[1001],b[1001],k[1001],n,c,d,e,f,surf,pos,coun=0,pani=1,pani2=1;
scanf("%d",&n);
for(c=1;c<=n;c++)
{scanf("%d",&a[c]);b[c]=c;k[c]=c;}

{pos=1;
while(pos<=n){pani=1,pani2=1;
surf=pos;
while(pani)
{
b[surf]=-1;surf=a[surf];
if(surf==pos){coun++;pani=0;}
}
c=1;
while(pani2){if(b[c]!=-1){pos=c;pani2=0;}c++;}
}}

pos=1;
printf("%d\n",coun);
while(pos<=n){pani=1,pani2=1;
surf=pos;
printf("%d",surf);
while(pani)
{printf(" %d",a[surf]);
k[surf]=-1;surf=a[surf];
if(surf==pos){printf("\n");pani=0;}
}
c=1;
while(pani2){if(k[c]!=-1){pos=c;pani2=0;}c++;}
}}
