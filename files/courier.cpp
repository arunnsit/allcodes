#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<string.h>
using namespace std;
#define INF 100000000000
long long int d[102][102]={0};
long long int dp[105][32768]={0};
int co[20][2],ac=0,b;
long long int solve(int prev,int mask)
{   
	//cout<<prev<<" "<<mask<<endl;
	if(pow(2,ac)-1==mask)
		return d[prev][b];
	long long int sol=INF;
	if(dp[prev][mask])
		return dp[prev][mask];
	for(int i=0;i<ac;i++)
		if(((mask>>i)&1)!=1)
			sol=min(sol,solve(co[i][1],mask|(1<<i))+d[prev][co[i][0]]+d[co[i][0]][co[i][1]]);
	return dp[prev][mask]=sol;	
}
int main()
{
	int n,m,i,j,k,x,y,z,q,t;
	ac=0;
    cin>>t;
    while(t--)
    {
    	ac=0;
    	memset(dp,0,sizeof(dp));
    	memset(d,0,sizeof(d));


	cin>>n>>m>>b;
	while(m--)
	{
		cin>>x>>y>>z;
		d[x][y]=z;
		d[y][x]=z;
	}
	for(i=0;i<=n;i++)
		for(j=0;j<=n;j++)
			if(!d[i][j]&&i!=j)
				d[i][j]=INF;

    for (k = 1; k <= n; k++)
    {
        for (i = 1; i <=n; i++)
        {
            for (j = 1; j <=n; j++)
            {
                if (d[i][k] + d[k][j] < d[i][j])
                    d[i][j] = d[i][k] + d[k][j];
            }
        }
    }
    cin>>q;
    while(q--)
    {
    	cin>>x>>y>>z;
    	while(z--)
    	{
    		co[ac][0]=x;
    		co[ac][1]=y;
    		ac++;
    	}
    }
    //cout<<ac;
    cout<<solve(b,0)<<endl;

}
}