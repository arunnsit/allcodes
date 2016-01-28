#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
std::vector<long long int> v[1000009];
long long int color[1000009]={0},vis[1000009]={0};
long long int dp[1000009]={0},mod=1000000007;
long long int dfs(long long int start,long long int parent)
{
	long long int sol=0,x=0,singles=0,total=0;	
	for(long long int i=0;i<v[start].size();i++)
	{
		if(v[start][i]!=parent&&color[start]!=color[v[start][i]])
		{
			x=dfs(v[start][i],start);
			dp[start]=(dp[start]+((singles%mod)*(x)%mod)%mod)%mod;
		    singles=((singles%mod)+(x%mod))%mod;
		}
		else if(v[start][i]!=parent)dfs(v[start][i],start);
	}
    dp[start]=(dp[start]+singles+1)%mod;
   	return (singles+1)%mod;
}
int main()
{
	long long int n,x,y;
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cin>>n;
	for(long long int i=0;i<n-1;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(long long int i=1;i<=n;i++)
	{
		char b;
		cin>>b;
		if(b=='W')
			color[i]=1;
	}
	long long int sol=0;
	dfs(1,0);
	for(long long int i=1;i<=n;i++)
	{
		sol=(sol+dp[i])%mod;
		//cout<<"i:"<<i<<" sol:"<<dp[i]<<endl;
	}
	cout<<sol<<endl;
}