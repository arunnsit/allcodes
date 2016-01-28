#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int arr[100]={0},n,k,m;
int check(int mask)
{   
	int ma=0,c=0,maskl=0;
	for(int i=0;i<n-k+1;i++)
		{
			ma=0;
			c=0;
			for(int j=i;j<=i+k-1;j++)
		{
			ma=max(arr[j]+((mask>>j)&1),ma);

		}
		for(int j=i;j<=i+k-1;j++)
		{
			if(ma==arr[j]+((mask>>j)&1))
				c++;
		}
		//cout<<c<<endl;
		if(c>=m)
			return -1;
	}
	for(int i=0;i<n;i++)
		maskl+=((mask>>i)&1);
	
		return maskl;
}
int cl(int mask)
{   
	int maskl=0;
	for(int i=0;i<n;i++)
		maskl+=((mask>>i)&1);
	return maskl;
}
int dp[1<<18];
int solve(int mask)
{
	int ch=check(mask);
	if(ch!=-1)
		return ch;
    if(cl(mask)==n)
    	return 9999999;
	if(dp[mask])
		return dp[mask];
	int sol=9999999;
	for(int i=0;i<n;i++)
		if(((mask>>i)&1)==0)
			sol=min(sol,solve(mask|(1<<i)));
	return dp[mask]=sol;	
}
int main()
{
	int i,j,t;
	cin>>t;
	while(t--)
	{
		memset(dp,0,sizeof(dp));
	cin>>n>>k>>m;
	for(i=0;i<n;i++)
		cin>>arr[i];
	//cout<<check(0)<<endl;
	int ans=solve(0);
	if(ans>n)
	cout<<-1<<endl;
    else cout<<ans<<endl;
}
}