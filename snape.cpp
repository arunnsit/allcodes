#include<stdio.h>
#include<math.h>
int main()
{float a,k,b,ls;int t;scanf("%d",&t);
while(t)
{scanf("%f %f",&b,&ls);a=sqrt(b*b+ls*ls);k=sqrt(ls*ls-b*b);
printf("%f %f\n",k,a);t--;}}
