#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
long long int dp[13][250][250]={0};

long long int solve(int n,int m,int prev)
{
	if(n==0&&m==0)
		return 1;
	if(n<0||m<0)
		return 0;
	if(dp[n][m][prev]!=-1)
		return dp[n][m][prev];
	int sol=0;
	for(int i=prev;i<=m;i++)
	{
		sol+=solve(n-1,m-i,i);
	}
	return dp[n][m][prev]=sol;
}

int main()
{
	long long int t,n,m,k,i,j;
	cin>>t;
	while(t--)
	{   memset(dp,-1,sizeof(dp));
		cin>>m>>n>>k;
		solve(n,m,1);//<<endl;
		long long int sol=0,x=1,y=1,xp=0,ch=0,mp=0;
		while(x<=n)
		{   ch=0;
			mp=0;
			while(sol<k && m-xp-y>=0)
			{   
				//cout<<n-x<<" "<<m-xp-y<<" "<<y<<" add "<<cursol<<" s:"<<sol<<endl; 
			    long long int cursol=solve(n-x,m-xp-y,y);
				sol+=cursol;
				mp=cursol;
				ch=1;
			    y++;

			}
			sol-=mp;
			//cout<<" s:"<<sol<<endl;
			if(ch)
				y--;
			cout<<y<<" ";
			xp+=y;
			x++;
		}
		cout<<endl;
	}
}
