#include<stdio.h>
#include<algorithm>
int main()
{int t,n,i,p;long long su;
scanf("%d",&t);
while(t){su=0;int a[100009]={0};scanf("%d",&n);for(i=0;i<n;i++){scanf("%d",&p);a[p]++;if(a[p]==1){su++;}}printf("%lld\n",su);t--;
}}
