#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
long long int a[202],n,dp[202][202][202]={0};
long long int solve(int pos,int lw,int lb)
{
	if(pos==n+1)
		return 0;
	if(dp[pos][lw][lb]!=-1)
		return dp[pos][lw][lb];
	long long int sol=99999;
	if(lw==0||a[lw]>a[pos])
	{
		sol=min(sol,solve(pos+1,pos,lb));
	}
	if(lb==0||a[lb]<a[pos])
	{
		sol=min(sol,solve(pos+1,lw,pos));
	}
	sol=min(sol,solve(pos+1,lw,lb)+1);
	//cout<<"pos:"<<pos<<" lw:"<<lw<<" lb:"<<lb<<endl;
	return dp[pos][lw][lb]=sol;
}
int main()
{
  cin>>n;
  while(n!=-1)
  {
  	memset(dp,-1,sizeof(dp));
  	for(int i=1;i<=n;i++)
  		cin>>a[i];
  	cout<<solve(1,0,0)<<endl;
  	cin>>n;
  }

}