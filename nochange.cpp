#include<iostream>
#include<string.h>
using namespace std;
int dp[100009]={0};
int K,sum[10]={0};
int solve(int x)
{
	if(x==0)return 1;
	if(x<0)return 0;
	if(dp[x]!=-1)return dp[x];
	int y=0;
	for(int i=0;i<K;i++)
	{
		y+=solve(x-sum[i]);
	}
return dp[x]=y;
}
int main()
{
	int x,k[10],i,j;
	cin>>x>>K;
	memset(dp,-1,sizeof(dp));
	for(i=0;i<K;i++)cin>>k[i];
		sum[0]=k[0];
	for(i=1;i<K;i++)
        sum[i]=sum[i-1]+k[i];	
if(solve(x)>0)cout<<"YES\n";
else cout<<"NO\n";


}