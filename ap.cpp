#include<stdio.h>
int main()
{int t;long long int c,n,b,s,a,d,i,m;scanf("%d",&t);
while(t)
{scanf("%lld %lld %lld",&c,&b,&s);
n=2*s/(c+b);
d=(b-c)/(n-5);
a=c-2*d;m=a;
printf("%lld\n",n);
for(i=0;i<n;i++){printf("%lld ",m);m+=d;}
printf("\n");
t--;}
}
