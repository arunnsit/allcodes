#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
vector<int>adj[100009];
int dp[100009][2]={0};
int sol(int curr,int prev)
{
	if(dp[curr][0])return min(dp[curr][0],dp[curr][1]);

	int x=0,i,j;
	for(i=0;i<adj[curr].size();i++)
		if(prev!=adj[curr][i])x+=sol(adj[curr][i],curr);
	x++;
	dp[curr][0]=x;
	x=0;
	for(i=0;i<adj[curr].size();i++){
		if(prev!=adj[curr][i])
		{

			for(j=0;j<adj[adj[curr][i]].size();j++)
			{
				if(adj[adj[curr][i]][j]!=adj[curr][i])
				{
                     x+=sol(adj[adj[curr][i]][j],adj[curr][i]);

				}
			}
			x++;
		}	
	}
	dp[curr][1]=x;
	return min(dp[curr][0],dp[curr][1]);


}
int main()
{
	int n,i,j,k,l,x,y;
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		scanf("%d %d",&x,&y);
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	printf("%d\n",sol(1,1));
    

}