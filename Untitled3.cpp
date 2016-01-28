#include <stdio.h>
#include <algorithm>
using namespace std;
 
long long int gcd(long long int a,long long  int b)
{
    if (a == 0) {
        return b;
    }
    return gcd(b%a, a);
}
long long int po(long long int x,long long  int y,long long int m)
{
    if (y == 0)
        return 1;
    long long int p = po(x, y/2, m) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}
long long int modularinverse(long long int a,long long  int m)
{
    long long int g = gcd(a, m);
    return po(a, m-2, m);
}
int mark[10000002]={0};

int main()
{
    long long int n , p,i;
    scanf("%lld %lld",&n,&p);
    long long int input,sol=0,inverse;
    
    for( i=0; i<n; i++) {
        scanf("%lld",&input);
        input = input%p;
        inverse = modularinverse(input,p);
        if(input == inverse) 
        {
        }
        else if(mark[inverse])
        {
        mark[inverse]--;
        }
        else {
        	sol++;
        	mark[input]++;
        }
    }
    printf("%lld\n",sol);
    return 0;
}