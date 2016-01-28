#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string.h>
#include <iomanip>
using namespace std;
long long int dp[20][1<<20];
long long int len[1<<21]={0};
std::vector<int> v[1000000];

int n;
int r[21][21];
long long int solve(int last,int mask,int pa)
{   
	long long int sol=0;

	if(r[last][pa]==1&&len[mask]>=3)
		{   
				//cout<<last<<" "<<mask<<" "<<pa<<endl;

			sol+= 1;
		}
    if(dp[last][mask])
    	{
    					//	cout<<last<<" "<<mask<<" "<<pa<<endl;

    		return dp[last][mask];
    	}
	for(int i=0;i<v[last].size();i++)
	{
		if((mask&(1<<v[last][i]))==0&&v[last][i]>pa)
		{
			sol+=solve(v[last][i],mask|(1<<v[last][i]),pa);
		}
	}
	return dp[last][mask]=sol;
}
int main()
{ 
	int x,y,m;

	cin>>n>>m;
	while(m--)
	{
		cin>>x>>y;
		x--;
		y--;
		v[x].push_back(y);
		v[y].push_back(x);
		r[x][y]=1;
		r[y][x]=1;
	}
	for(int i=1;i<=(1<<(n));i++)
	{
		 x=0;
		for(int j=0;j<n;j++)
	{
		if((i>>j)&1)
			x++;
	}
	len[i]=x;
    }
	long long int sol=0;
	for(int i=0;i<n;i++)
		{
			sol+=solve(i,0|(1<<i),i);
		}
	cout<<fixed;	
	cout<<setprecision(0)<<sol/2<<endl;	
}