#include<stdio.h>
int main()
{int t;double m,i,n,r,k;
scanf("%d",&t);
while(t)
{scanf("%lf %lf",&n,&k);r=n-k;m=1;
for(i=1;i<k;i++)
{m=m*(n-i);m=m/(k-i);}
printf("%.0lf\n",m);t--;}}
