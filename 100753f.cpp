#include <iostream>
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <math.h>
typedef unsigned long long ULL;

using namespace std;
ULL mulmod(ULL a, ULL b, ULL c){
    ULL x = 0,y = a%c;
    
    while(b>0){
        if(b&1) x = (x+y)%c;
        y = (y<<1)%c;
        b >>= 1;
    }
    
    return x;
}

ULL pow(ULL a, ULL b, ULL c){
    ULL x = 1, y = a;
    
    while(b>0){
        if(b&1) x = mulmod(x,y,c);
        y = mulmod(y,y,c);
        b >>= 1;
    }
    
    return x;
}

bool miller_rabin(ULL p, int it){
    if(p<2) return false;
    if(p==2) return true;
    if((p&1)==0) return false;
    
    ULL s = p-1;
    while(s%2==0) s >>= 1;
    
    while(it--){
        ULL a = rand()%(p-1)+1,temp = s;
        ULL mod = pow(a,temp,p);
        
        if(mod==-1 || mod==1) continue;
        
        while(temp!=p-1 && mod!=p-1){
            mod = mulmod(mod,mod,p);
            temp <<= 1;
        }
        
        if(mod!=p-1) return false;
    }
    
    return true;
}

ULL primes[1000080]={0};
int main()
{
    ULL n=1000000,i,j,k,l,solution=1,coun;

    for(i=2;i<=1000;i++)
        if(!primes[i]){
            for(j=i*i;j<=1000009;j+=i)
                primes[j]++;
    }
    vector<ULL> v;
    for(i=2;i<=1000009;i++)
        if(!primes[i])v.push_back(i);
    cin>>n;
    i=0;
    while(i<v.size())
    {
        if(v[i]*v[i]*v[i]>n)
            break;
        if(n%v[i]==0)
        {
            coun=1;
            while(n%v[i]==0)
                {n=n/v[i];coun++;}
            solution*=coun;
        }
        i++;
    }
    if(n==1)
        solution=1;
    else if(miller_rabin(n,55))solution*=2;
    else if(sqrt(n)*sqrt(n)==n&&miller_rabin(sqrt(n),55))
        solution*=3;
    else solution*=4;
    cout<<solution<<endl;



}