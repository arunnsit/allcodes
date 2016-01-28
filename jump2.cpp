#include<stdio.h>
#include<algorithm>
using namespace std;
long long int num[300009]={0},a[300009],h[300009];
long long int dp[300009]={0},n;
int main()
{
	int i,j,k;
	scanf("%lld",&n);
	for(i=1;i<=n;i++)scanf("%lld",&num[i]),dp[i]=9999999999999;
	for(i=1;i<=n;i++)scanf("%lld",&a[i]);
	for(i=1;i<=n;i++)scanf("%lld",&h[i]);
    dp[1]=0;
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(num[j]>num[i]){
				dp[j]=min(dp[j],dp[i]+a[j]+(h[j]-h[i])*(h[j]-h[i]));
			}


		}
	}	
	printf("%lld\n",dp[n]+a[1]);	
}