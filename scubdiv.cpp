#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;
int a[1009][3]={0};
int dp[200][200][1002]={0};
int o,n,p;
int sol(int x,int y,int i)
{   
	if(x>=o&&y>=n)return 0;
	if(i==p)return 999999999;
	if(dp[x][y][i]!=-1)return dp[x][y][i];
	dp[x][y][i]=min(sol(min(x+a[i][0],o),min(y+a[i][1],n),i+1)+a[i][2],sol(x,y,i+1));
	return dp[x][y][i];
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,k,l;
        scanf("%d %d %d",&o,&n,&p);
        memset(dp,-1,sizeof(dp[0][0][0])*200*200*1002);
        for(i=0;i<p;i++)
        {
        	scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);
        }
      printf("%d\n",sol(0,0,0));
	}
}