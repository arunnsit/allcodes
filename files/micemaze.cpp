#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
#define inf (1<<29);
struct node{
	int u,val;
};
vector<node>adj[200];
struct cmp{
	bool operator()(node a,node b)
	{
		return a.val>b.val;
	}
};
priority_queue<node,vector<node>,cmp> Q;
int d[200]={0};
bool v[200]={0};
int main()
{
	int n,m,e,i,j,k,t,x,y;
	scanf("%d %d %d %d",&n,&e,&t,&m);
	while(m--)
	{
		scanf("%d %d %d",&x,&y,&k);
		node temp;
		temp.u=x;
		temp.val=k;
		adj[y].push_back(temp);
	}
	for(i=1;i<=n;i++)d[i]=inf;
	d[e]=0;
    node temp;
    temp.u=e;
    temp.val=0;
	Q.push(temp);
	while(!Q.empty())
	{
		node u=Q.top();
		Q.pop();
		if(v[u.u])continue;
		else
		for(i=0;i<adj[u.u].size();i++)
		{
			if(d[adj[u.u][i].u]>d[u.u]+adj[u.u][i].val)
			{
				d[adj[u.u][i].u]=d[u.u]+adj[u.u][i].val;
				Q.push(adj[u.u][i]);
			}

		}
		v[u.u]=1;
	}
	int c=0;
	for(i=1;i<=n;i++)if(d[i]<=t)c++;
	printf("%d\n",c);	


}