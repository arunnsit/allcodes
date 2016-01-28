#include<stdio.h>
long long int stor[200000];
int main(){long long int a,b,n,c,coun=0,l;
scanf("%lld",&n);
for(a=0;a<n;a++){scanf("%lld",&stor[a]);}
if(stor[n-1]-stor[0]>=0){printf("%lld",stor[n-1]-stor[0]);}
else{printf("%lld",-stor[n-1]+stor[0]);}}
