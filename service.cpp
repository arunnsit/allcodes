#include<iostream>
#include<algorithm>
using namespace std;
int a[205][205],q[1050];
int dp[205][205][1050]={0},n;
int solve(int x,int y,int i)
{   cout<<"x:"<<x<<" y:"<<y<<" z:"<<q[i-1]<<endl;
	if(x==y||y==q[i-1]||q[i-1]==x)return 999999999;
	if(i==n+1)
		return 0;
	if(dp[x][y][i])
	    return dp[x][y][i];
	int xy=0;
   
    xy=min(min(solve(x,y,i+1)+a[q[i-1]][q[i]],solve(q[i-1],y,i+1)+a[x][q[i]]),solve(x,q[i-1],i+1)+a[y][q[i]]);
    dp[x][y][i]=xy;
    return xy;
}

int main()
{
	int t,i,j,k,l;
	cin>>t;
	while(t--)
	{
		cin>>n>>l;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		for(i=1;i<=l;i++)
		    {cin>>q[i];q[i]--;}
		q[0]=2;
		cout<<solve(0,1,1)<<endl;
	}
}