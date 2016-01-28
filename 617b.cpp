#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string.h>
using namespace std;
long long int dp[300][300]={0},arr[300],n;
long long int solve(int prev,int x)
{   
	//cout<<prev<<" "<<x<<endl;
	if(prev==n+1)
		return 1;
	if(dp[prev][x])
		return dp[prev][x];
	int sum=0;
	long long int ways=0;
	for(int i=prev;i<=n;i++)
	{
		sum+=arr[i];
		if(sum==1)
			ways+=solve(i+1,x+1);
		if(sum>1)
			break;
	}
	return dp[prev][x]=ways;
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	cout<<solve(1,0)<<endl;
}