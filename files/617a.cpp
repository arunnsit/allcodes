#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string.h>
using namespace std;
long long int dp[1000009]={0};
long long int solve(int n)
{
	if(n==0)
		return 0;
	if(n<0)
		return 99999999999;
	if(dp[n])
		return dp[n];
	return dp[n]=min(min(solve(n-1),solve(n-2)),min(min(solve(n-3),solve(n-4)),solve(n-5)))+1;
}
int main()
{
	int n;
	cin>>n;
	cout<<solve(n)<<endl;

}