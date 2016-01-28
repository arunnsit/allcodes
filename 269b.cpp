#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
struct node
{
	int x;
	float y;
	int comp;

};
bool cmp(node a,node b)
{
	return a.y<b.y;
}
int n,m;
int dp[5055][5055]={0};
node a[5055];
int solve(int curr,int mark)
{
	if(curr==n+1&&mark==m)
		return 0;
	if(curr==n+2||mark==m+1)
		return 999999999;
	if(dp[curr][mark]!=-1)
		return dp[curr][mark];
    dp[curr][mark]=min(solve(curr+1,mark)+(a[curr].x==mark?0:1),solve(curr,mark+1));
    //cout<<"curr:"<<curr<<" mark:"<<mark<<" sol:"<<dp[curr][mark]<<endl;
	return dp[curr][mark];
}
int main()
{   memset(dp,-1,sizeof(dp));
	int i,k,j,l;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		cin>>a[i].x>>a[i].y;
    sort(a+1,a+n+1,cmp);
    
    for(i=1;i<=n;i++)
    	a[i].comp=i;
    int solp=solve(1,1);
    cout<<((solp==3652)?0:solp);
}