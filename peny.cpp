#include<stdio.h>
#include<string.h>
int main()
{int t,i,l,o;char p[100];
scanf("%d",&t);
while(t--)
{    scanf("%d %s",&o,&p);l=40;int a[10]={0};
for(i=0;i<l-2;i++){
if(p[i]=='T'){if(p[i+1]=='T'){if(p[i+2]=='T'){a[0]++;}if(p[i+2]=='H'){a[1]++;}}
if(p[i+1]=='H'){if(p[i+2]=='T'){a[2]++;}if(p[i+2]=='H'){a[3]++;}}}
if(p[i]=='H'){if(p[i+1]=='T'){if(p[i+2]=='T'){a[4]++;}if(p[i+2]=='H'){a[5]++;}}
if(p[i+1]=='H'){if(p[i+2]=='T'){a[6]++;}if(p[i+2]=='H'){a[7]++;}}}}
printf("%d %d %d %d %d %d %d %d %d\n",o,a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7]);

}}
