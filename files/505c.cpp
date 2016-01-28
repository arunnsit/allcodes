#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int a[30009]={0};
int dp[30009][700]={0};
int mark[30009]={0};
int sol(int curr ,int jump)
{ //printf("%d %d\n",curr,jump);
	if(curr>30000)return 0;
	if(jump<=0)return 0;
	if(dp[curr][jump]!=-1)return dp[curr][jump];
	return dp[curr][jump]=max(max(sol(curr+jump,jump),sol(curr+jump-1,jump-1)),sol(curr+jump+1,jump+1))+a[curr];
}
int main()
{
	int n,d,x,s=0,i,j,m=0;
	scanf("%d %d",&n,&d);
	memset(dp,-1,sizeof(dp[0][0])*30009*700);
	for(i=1;i<=n;i++)
		{
			scanf("%d",&x);
			a[x]++;
		}

printf("%d\n",sol(d,d)+a[0]);



}
