
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int n,k,x,y;
vector<int> adj[60000];
long long int dp[60000][600]={0};
long long int fsol=0;
void dfs2(int start,int parent,int level,int mainy,int le[600])
{   
	fsol+=dp[mainy][k-level];
    le[level]++;
	if(level==k)
	{
		return;
	}
	for(int i=0;i<adj[start].size();i++)
	if(adj[start][i]!=parent){
		dfs2(adj[start][i],start,level+1,mainy,le);
	}
}

void dfs(int start,int parent)
{
	for(int i=0;i<adj[start].size();i++)
	if(adj[start][i]!=parent){
		int le[600]={0};
		dp[start][0]=1;
		dfs2(adj[start][i],start,1,start,le);
		for(int j=1;j<=k;j++)
			dp[start][j]+=le[j];
		//cout<<"start:"<<start<<" "<<fsol<<endl;
		dfs(adj[start][i],start);
	}
}
int main()
{
	cin>>n>>k;

	for(int i=0;i<n-1;i++)
	{
		cin>>x>>y;
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1,-1);
	cout<<fsol<<endl;
}