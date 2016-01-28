#include <iostream>
#include <stdio.h>
#include <vector> 
#include <unordered_map>
using namespace std;
std::vector<int> v[200009],a[200009];
int dp[700409]={0},mod=1000000007;
long long int key(long long int  k1,long long int k2)
{
	return ((k1 + k2)*(k1 + k2 + 1))/2+k2;
}
long long int product=1;
long long int solve(int start,int parent,int edgenos)
{
	 product=1;
	for(int i=0;i<v[start].size();i++)
	if(v[start][i]!=parent){
		if(!dp[a[start][i]])
		product=((product%mod)*(solve(v[start][i],start,a[start][i])+1)%mod)%mod;
	    else
	    product=((product%mod)*(dp[a[start][i]]+1)%mod)%mod;
	}
	return dp[edgenos]=product%mod;
}

int main()
{
	int n,x,i,edgenos;
	cin>>n;
	edgenos=n+10;
	for(int i=0;i<n-1;i++)
	{
		cin>>x;
		v[i+2].push_back(x);
		a[i+2].push_back(edgenos);
		edgenos++;
		a[x].push_back(edgenos);
		edgenos++;
		v[x].push_back(i+2);
	}
	for(i=1;i<=n;i++)
	{
		cout<<solve(i,i,i)<<" ";
	}
}