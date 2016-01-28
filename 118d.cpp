#include<stdio.h>
#include<string.h>
int n1,n2,i,j,k1,k2;
 int dp[102][102][15][3]={0},mod=100000000;
 int sol(int i,int j,int curr1,int curr2)
{   if(i>n1||j>n2)return 0;
	if(i==n1&&j==n2)return 1;
	if(dp[i][j][curr1][curr2]!=-1)return dp[i][j][curr1][curr2];
	else {
		if(curr1==k1&&curr2==1)dp[i][j][curr1][curr2]=sol(i,j+1,1,2);
		else if(curr1==k2&&curr2==2)dp[i][j][curr1][curr2]=sol(i+1,j,1,1);
		else if(curr2==1){
			dp[i][j][curr1][curr2]=sol(i,j+1,1,2)+sol(i+1,j,curr1+1,1);
		}
		else{
			dp[i][j][curr1][curr2]=sol(i,j+1,curr1+1,2)+sol(i+1,j,1,1);
		}
	}
	return dp[i][j][curr1][curr2]%mod;

}
int main()
{   memset(dp,-1,sizeof(dp[0][0][0][0])*102*102*15*3);
	scanf("%d %d %d %d",&n1,&n2,&k1,&k2);
	printf("%d\n",sol(0,0,0,0));
}