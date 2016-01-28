#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int dp[1005][1005]={0},a[1003];
int solve(int n,int k)
{
	if(k<0)return -100000000;
	if(n<0||k==0)return 0;

	if(dp[n][k]!=-1)return dp[n][k];
	dp[n][k]=max(solve(n-2,k-a[n])+a[n],solve(n-1,k));
	return dp[n][k];
}
int main()
{
	int t,p;
	cin>>t;
	for(p=1;p<=t;p++)
	{   memset(dp,-1,sizeof(dp));
		int n,k;
		cin>>n>>k;
		int i;
		for(i=0;i<n;i++)cin>>a[i];
		int sol=solve(n-1,k);
		if(sol<0)cout<<"Scenario #"<<p<<": "<<0<<endl;
		else cout<<"Scenario #"<<p<<": "<<sol<<endl;
	}

}