#include<stdio.h>
#include<algorithm>
int main()
{int t,i,n,k; long long int a[200000],ma;
scanf("%d",&t);
while(t)
{scanf("%d %d",&n,&k);ma=1000000009;
for(i=0;i<n;i++)scanf("%lld",&a[i]);
std::sort(a,a+n);
for(i=k-1;i<n;i++){if(ma>a[i]-a[i-k+1]){ma=a[i]-a[i-k+1];}}
printf("%lld\n",ma);
t--;}

}
