#include<iostream>
#include<string.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
long long int a[503039]={0};
long long int dp[500330]={0},N;
long long int solve(int n)
{
	if(n>=N)return 0;
	if(dp[n])return dp[n];
	long long int x;
	x=max(max(solve(n+2)+a[n],solve(n+4)+a[n]+a[n+1]),solve(n+6)+a[n]+a[n+1]+a[n+2]);
	return dp[n]=x;
}
int main()
{
	 int t;
	scanf("%d",&t);
	ios::sync_with_stdio(false); 
	while(t--)
	{
	    int n;
		memset(dp,0,sizeof(dp));
		memset(a,0,sizeof(a));
		scanf("%d",&n);
		N=n;
		for(int i=0;i<n;i++)scanf("%lld",&a[i]);
        printf("%lld\n",solve(0));
	}

}