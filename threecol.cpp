#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int count_child[10009]={0},n_max;
char a[10009];
int dfs(int n)
{
	if(a[n]=='0')	
	count_child[n]=0;
	if(a[n]=='1')count_child[n]=dfs(n+1);
	if(a[n]=='2')
	{
		int y=dfs(n+1);
		count_child[n]=y+dfs(y+n+1);
	}	

return count_child[n]+1;
}
int dp[10009][5]={0},dp2[10009][5]={0};
int solve1(int root,int color)
{   
	if(dp[root][color]!=-1)return dp[root][color];
	int x=0;
	if(a[root]=='1')
	{
		for(int i=0;i<3;i++)
		{if(i!=color)
			x=max(x,solve1(root+1,i)+((i==0)?1:0));
		}
	}
	else if(a[root]=='2')
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i!=color&&j!=color&&i!=j)
				{
				    x=max(x,solve1(root+1,i)+((i==0)?1:0)+solve1(root+2+count_child[root+1],j)+((j==0)?1:0));
				}
			}
		}
	}
	return dp[root][color]=x;
}
int solve2(int root,int color)
{   	
	if(dp2[root][color]!=-1)return dp2[root][color];
	int x=99999999;
	if(a[root]=='0')return 0;
	if(a[root]=='1')
	{
		for(int i=0;i<3;i++)
		{if(i!=color)
			x=min(x,solve2(root+1,i)+((i==0)?1:0));
		}
	}
	else if(a[root]=='2')
	{
		for(int i=0;i<3;i++)
		{
			for(int j=0;j<3;j++)
			{
				if(i!=color&&j!=color&&i!=j)
				{
				    x=min(x,solve2(root+1,i)+((i==0)?1:0)+solve2(root+2+count_child[root+1],j)+((j==0)?1:0));
				}
			}
		}
	}
	//cout<<"r:"<<root<<" c:"<<color<<" ch:"<<a[root]<<" sol:"<<x<<endl;
	return dp2[root][color]=x;
}
int main()
{
	int n,i,j,k,t;
	cin>>t;
	while(t--){
	memset(dp,-1,sizeof(dp));
	memset(dp2,-1,sizeof(dp2));	
	cin>>a;
	n_max=strlen(a);
	dfs(0);
	//for(i=0;i<n_max;i++)cout<<"i:"<<i+1+count_child[i]<<endl;
	cout<<max(max(solve1(0,0)+1,solve1(0,1)),solve1(0,2))<<" "<<min(min(solve2(0,0)+1,solve2(0,1)),solve2(0,2))<<endl;	
}}