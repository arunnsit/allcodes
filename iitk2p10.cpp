//author : arunnsit
// fermut little theorem : k^(mod-1)%mod=1 ,as mod is a prime nos
#include<stdio.h>
 inline long long pow(long long b,long long e,long long mod)
{
long long result=1;
while(e>0)
{
if(e%2==1)
result=(result*b)%mod;
e=e/2;
b=(b*b)%mod;
}
return result;
}
int main(){
    long long int t,k,n,x,mod=1000000007;
    scanf("%lld",&t);
    while(t){
        scanf("%lld %lld",&k,&n);
        if(n==1)printf("1\n");
        else if(n==2||n==3)printf("%d\n",k%mod);
        else {n=n-3;
        x=pow(2,n,mod-1);
        printf("%lld\n",pow(k,x,mod));

        }
   t--;} }
