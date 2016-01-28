#include<stdio.h>
#include<string.h>
#include<algorithm>
int main()
{int t,l,p,x,i,o,u,temp,ini;char a[1000],b[1000];int k[10000];scanf("%d",&t);
while(t)
{scanf("%s %s",&a,&b);l=strlen(a);p=strlen(b);o=std::min(p,l);
u=std::max(p,l);temp=0;ini=0;
for(i=0;i<u;i++){if(i<o) {x=a[i]+b[i]-'0'-'0'+temp;}else{if(p==o){x=a[i]-'0'+temp;}else{x=b[i]-'0'+temp;}}k[i]=x%10;if(x>9){temp=x/10;}else{temp=0;}}
if(temp!=0){k[i]=temp;u++;}
for(i=0;i<u;i++){if(k[i]==0){ini++;}else{break;}}
for(i=ini;i<u;i++){printf("%d",k[i]);}printf("\n");t--;
}}
