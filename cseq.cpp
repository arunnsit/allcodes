#include<stdio.h>
#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>
int co(int n, int p)
{
    int k=0;
    while (n>=p)
    {
        k+=n/p;
        n/=p;
    }
    return k;
}
long long pow(int a, int b, int mo)
{
    long long x=1,y=a;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x=(x*y);
            if(x>mo) x%=mo;
        }
        y = (y*y);
        if(y>mo) y%=mo;
        b /= 2;
    }
    return x;
}
long long eu(int n, int mo)
{
    return pow(n,mo-2,mo);
}

long long factmo(int n, int mo)
{
    long long res = 1;
    while (n > 0)
    {
        for (int i=2, m=n%mo; i<=m; i++)
            res = (res * i) % mo;
        if ((n/=mo)%2 > 0)
            res = mo - res;
    }
    return res;
}

long long C(int n, int r, int mo)
{
    if (co(n, mo) > co(r, mo) + co(n-r, mo))
        return 0;

    return (factmo(n, mo) *
            ((eu(factmo(r, mo), mo) *
            eu(factmo(n-r, mo), mo)) % mo)) % mo;
}

int main(){
    long long int t,n,l,r,i,j,term=1,sum,a,b;
    scanf("%lld\n",&t);
    while(t--){
        scanf("%lld %lld %lld",&n,&l,&r);
        l=r-l+1;
        sum=C(n+l,l,1000003);
        printf("%lld\n",(sum==0)?1000002:sum-1);
        }

    }

