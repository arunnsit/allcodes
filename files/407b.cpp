#include<stdio.h>
#include<iostream>
using namespace std;
long long int dp[1005],dp2[1005],mod=1000000007;
int a[1008],n;
int main()
{
	int i,j;
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	dp[1]=1;
	dp2[1]=1;
	for(i=2;i<=n+1;i++)
	{
		if(i==a[i])
			{
				dp[i]=(2+dp[i-1])%mod;
				dp2[i]=1;
			}
		else
		{   dp[i]=1;
			for(j=a[i];j<i;j++)
				dp[i]=(dp[i]+dp2[j]+1)%mod;
			dp2[i]=dp[i];
			dp[i]=(dp[i]+dp[i-1]+1)%mod;
		}		
	}
	//for(i=1;i<=n;i++)cout<<dp[i]<<" ";cout<<endl;
    //for(i=1;i<=n;i++)cout<<dp2[i]<<" ";cout<<endl;
	cout<<(dp[n]+1)%mod<<endl;
		
}