#include<stdio.h>
unsigned long long int a[10000000];
int main()
{unsigned long long int m,n,i,j,te;char ch;
scanf("%lld %lld",&m,&n);
while(m&&n)
{
for(i=0;i<m;i++)
{te=0;scanf("%c",&ch);for(j=0;j<n;j++){scanf("%c",&ch);if(ch>=48&&ch<=57){te=te*10+ch-'0';}}
a[i]=te;}
for(i=m-1;i>1;i-=2){a[i-1]*=a[i];a[i-2]+=a[i-1];if(i>=4){a[i-4]*=a[i];}}
printf("%lld %lld\n",a[0],a[2]);
scanf("%lld %lld",&m,&n);


    }}
