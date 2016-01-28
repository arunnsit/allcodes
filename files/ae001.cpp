#include<stdio.h>
int main()
{    long long a1=0;int d,a,p,t;
scanf("%d",&a);
for(d=1;d<=a;d++)
for(p=d;p<=a;p++)
{if(p*d<=a){a1+=1;}else{break;}}
printf("%lld\n",a1);
}

