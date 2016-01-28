#include<bits/stdc++.h>
using namespace std;
 
long long int  sumOfDigitsFrom1ToN(long long int n)
{
 
    if (n<10)
      return n*(n+1)/2;
 
    long long int d = log10(n);
 
    long long int *a = new int[d+1];
    a[0] = 0, a[1] = 45;
    for (int i=2; i<=d; i++)
        a[i] = a[i-1]*10 + 45*ceil(pow(10,i-1));
 
    long long int  p = ceil(pow(10, d));
 
    long long int msd = n/p;
 
    return msd*a[d] + (msd*(msd-1)/2)*p +  
           msd*(1+n%p) + sumOfDigitsFrom1ToN(n%p);
}
 
int main()
{
    long long int  a,b;
    cin>>a>>b;
    while(a!=-1&&b!=-1)
    {
    cout<< sumOfDigitsFrom1ToN(b)-sumOfDigitsFrom1ToN(a)<<endl;
    cin>>a>>b;
     }
    return 0;
}