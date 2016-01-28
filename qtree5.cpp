/*thanks tanuj ! fuckin time limit ! made mistakes like : used set over multiset , costed a few wa's, never trust sets of structures*/
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <set>
#define N 100009
#define LOGN 20
#define si(n) scanf("%d",&n)
#define dout(n) printf("%d\n",n)
using namespace std;

set<int> orginal_tree[N];

int level[N]={0},dp[LOGN][N]={0},sub[N]={0},n,nc,par[N],color[N],m;
multiset<int>ans[N];
//preprocessing............

void dfs0(int curr,int p)
{
	for(set<int>::iterator it=orginal_tree[curr].begin();it!=orginal_tree[curr].end();it++)
	if(*it!=p)
	{   
		dp[0][*it]=curr;
		level[*it]=level[curr]+1;
		dfs0(*it,curr);
	}
}
void preprocess()
{
	level[0]=0;
	dp[0][0]=0;
	dfs0(0,0);
	for(int i=1;i<LOGN;i++)
		for(int j=0;j<n;j++)
			dp[i][j] = dp[i-1][dp[i-1][j]];
}
int lca(int a,int b)
{
	if(level[a]>level[b])swap(a,b);
	int d = level[b]-level[a];
	for(int i=0;i<LOGN;i++)
		if(d&(1<<i))
			b=dp[i][b];
	if(a==b)return a;
	for(int i=LOGN-1;i>=0;i--)
		if(dp[i][a]!=dp[i][b])
			a=dp[i][a],b=dp[i][b];
	return dp[0][a];
}

int dist(int u,int v)
{
	return level[u] + level[v] - 2*level[lca(u,v)];
}
//centroid decomp...........
int dfs1(int curr,int p)
{   
	sub[curr]=1;
	nc++;
	for(set<int>::iterator it=orginal_tree[curr].begin();it!=orginal_tree[curr].end();it++)
	if(*it!=p)
	{
		sub[curr]+=dfs1(*it,curr);
	}
	return sub[curr];
}
int centroid(int curr,int p)
{   
	int node=curr;
	for(set<int>::iterator it=orginal_tree[curr].begin();it!=orginal_tree[curr].end();it++)
	if(*it!=p)
	{   
		if(nc/2<sub[*it])
			{
				return centroid(*it,curr);
			}
	}
	return curr;
}
void decompose(int curr,int p)
{
	nc=0;
	dfs1(curr,curr);
	int cent=centroid(curr,curr);
	if(p==-1)p=cent;
	par[cent]=p;
	for(set<int>::iterator it=orginal_tree[cent].begin();it!=orginal_tree[cent].end();it++)
	{
		orginal_tree[*it].erase(cent);
		decompose(*it,cent);
	}
	orginal_tree[cent].clear();
}
void check_decompose()
{
	for(int i=0;i<n;i++)
	{
		cout<<i<<" : "<<par[i]<<endl;
	}
}
void update(int curr)
{
	int x=curr;
	if(color[curr])
	{
		color[curr]=0;
		while(1)
		{
			ans[curr].erase(ans[curr].find(dist(x,curr)));
			if(curr==par[curr])
				break;
			curr=par[curr];
		}
	}
	else
	{
		color[curr]=1;
		while(1)
		{
			ans[curr].insert(dist(x,curr));
			if(curr==par[curr])
				break;
			curr=par[curr];
		}
	}
}
int query(int curr)
{
	int x=curr;
	int sol=100000000;
	while(1)
	{
		sol=min(sol,(*ans[curr].begin())+dist(x,curr));
		if(curr==par[curr])
				break;
			curr=par[curr];
	}
	if(sol>=10000000)
		return -1;
	else return sol;
}
int main()
{
	int x,y;
   // std::ios::sync_with_stdio(false);
	si(n);

	for(int i=0;i<n-1;i++)
	{
		si(x);
		si(y);
		orginal_tree[x-1].insert(y-1);
		orginal_tree[y-1].insert(x-1);
	}
	for(int i=0;i<n;i++)
		ans[i].insert(100000000),color[i]=0;
	preprocess();
	decompose(0,-1);
	cin>>m;
	while(m--)
	{
		si(x);
		si(y);
		if(x)
			dout(query(y-1));
		else
			update(y-1);

	}
}