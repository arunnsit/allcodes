#include<stdio.h>

 inline long long pow_bhaji(long long base,long long exponent,long long mod)
{
long long result=1;
while(exponent>0)
{
if(exponent%2==1)
result=(result*base)%mod;
exponent=exponent/2;
base=(base*base)%mod;
}
return result;
}
int main()
{long long a,b,c,d;int t;
 scanf("%d",&t);
 while(t)
 {scanf("%lld %lld",&a,&b);
 d=pow_bhaji(a,b,1000000000000000007);
 printf("%lld\n",d);t--;
}return 0;
}
