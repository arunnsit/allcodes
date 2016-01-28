#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int n,k,t,a[505]={0};
int min_memo[505][505]={0},dp[505][505]={0};
int solve(int pos,int coun)
{   
	//cout<<pos<<" "<<coun<<endl;
	if(coun==k)
		return 0;
	if(pos>=n+1)
		return -999999999;
	if(dp[pos][coun]!=-1)
		return dp[pos][coun];
	int sol=-999999999;
	
	for(int p=1;p<=t;p++)
	if(pos+p-1<=n)
		sol=max(sol,solve(pos+p,coun+1)+p*min_memo[pos][pos+p-1]);
    
    sol=max(sol,solve(pos+1,coun));

    return dp[pos][coun]=sol;
}
int main()
{
	int i,j,tmp;
    
    memset(dp,-1,sizeof(dp));

	cin>>n>>k>>t;
	for(i=1;i<=n;i++)
		cin>>a[i];

	for(i=1;i<=n;i++)
	{
		tmp=1500;
		for(j=i;j<=n;j++)
		{
			tmp=min(tmp,a[j]);
			min_memo[i][j]=tmp;
		}
	}
    cout<<solve(1,0)<<endl;
}