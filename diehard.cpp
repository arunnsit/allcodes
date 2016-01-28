#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int dp[2008][2008]={0};
int solve(int a,int h)
{   //printf("%d %d\n",a,h);
	if(h<=0||a<=0)return -1;
	if(dp[a][h]!=-1)return dp[a][h];
	dp[a][h]=max(solve(a-8,h-2),solve(a+7,h-17))+2;
return dp[a][h];
}
int main()
{
int t;
scanf("%d",&t);
memset(dp,-1,sizeof(dp));
while(t--)
{   
	int a,h,sol;
    scanf("%d %d",&h,&a);
    printf("%d\n",solve(a,h));
}


}