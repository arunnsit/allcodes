#include<stdio.h>

#include<string.h>
 int dp[102][102][2];
int x,y;
int sol(int i,int j,int prev)
{
	if(i==x&&y==j)return 1;
    if(j>y||i>x)return 0;
    if(dp[i][j][prev]!=-1)return dp[i][j][prev];
   return dp[i][j][prev]=sol(i+1,j+prev*1,1)+sol(i+1,j,0);


}
int main()
{  
	int t;
	scanf("%d",&t);
	while(t--)
	{
		 memset(dp,-1,sizeof(dp[0][0][0])*102*102*2);
		int i,j,k;
		scanf("%d %d %d",&i,&x,&y);
		printf("%d %d\n",i,sol(1,0,1)+sol(1,0,0));

	}
}