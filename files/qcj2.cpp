#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
long long int dp[150][150]={0},n;
long long int solve(int io,int balls)
{   //cout<<io<<" "<<n<<endl;
	if((io-1)<balls)
		return 0;
	if(io==n+1&&balls==n)
		return 1;
	if(io==n+1)
		return 0;
	if(dp[io][balls]!=-1)
		return dp[io][balls];
	long long int sol=0;
	for(int i=0;i<=n;i++)
		sol=(sol+solve(io+1,balls+i))%761238923;
	return dp[io][balls]=sol;
}
int main()
{
	int t;
	cin>>n;
	while(n)
	{   memset(dp,-1,sizeof(dp));
		cout<<solve(1,0)<<endl;
				cin>>n;

	}

}