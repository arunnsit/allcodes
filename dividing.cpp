#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{long long n,i;long long int s=0,p,d;
scanf("%lld",&n);p=(n*n+n)/2;
for(i=0;i<n;i++){scanf("%lld",&d);s+=d;}
if(p==s){printf("YES\n");}
else{printf("NO\n");}
}
