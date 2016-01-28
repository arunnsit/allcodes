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
    long long int t,m,n,z;
    scanf("%lld",&t);
    while(t){z=1;
        scanf("%lld %lld",&n,&m);
        if(n>2){
        z=pow(m-2,n-2,1000000007);
        z=(z*m)%1000000007;
        z=(z*(m-1))%1000000007;
        printf("%lld\n",z);
        }
        if(n==1){printf("%lld\n",m);}
       else if(n==2){printf("%lld\n",((m*(m-1))%1000000007));}
t--;

    }
}
