#include<stdio.h>
int main(){
int t;
scanf("%d",&t);
while(t){int a,b,c,m,n,y,p[150]={0};
char te;
long long int x=1,coun=0;
scanf("%d %d",&n,&m);
c=m;
while(m){
{scanf(" %c %d",&te,&y);
b=te;
p[b]++;
if(p[b]==1){coun++;}}m--;}
for(a=0;a<c;a++){x=(x*coun)%1000000009;}
printf("%lld\n",x);t--;}}
