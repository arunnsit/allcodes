#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>
#include <utility>
#define INF 10000000000000000
#define mp make_pair
#define N 1000000
#include<set>
using namespace std;
std::vector<int> adj[N],num[N];
std::vector<long long int>w[N];
long long int d[N],another_weight[N];
int last_edge[N];
void dijkstra(int u,int n)
{   
	set<pair<long long,int> > pq;
    
    for(int i=0;i<=n;i++)
    	d[i]=INF;
    
    d[u]=0;

    pq.insert(mp(d[u],u));
    long long int curw,curr;
    while(!pq.empty())
    {
    	curr=(*pq.begin()).second;
    	curw=(*pq.begin()).first;
    	pq.erase(pq.find(mp(curw,curr)));
    	if(d[curr]==curw)
    	{
    		for(int i=0;i<adj[curr].size();i++)
    		{
    			int child=adj[curr][i];
    			if(d[child]>curw+w[curr][i]||(d[child]==curw+w[curr][i]&&another_weight[last_edge[child]]>w[curr][i]))
    			{
    				d[child]=curw+w[curr][i];
    				last_edge[child]=num[curr][i];
    				pq.insert(mp(d[child],child));
    			}
    		}
    	}
    }
    long long int sum=0;
    for(int i=1;i<=n;i++)
    	if(i!=u)
    		sum+=another_weight[last_edge[i]];
    cout<<sum<<endl;
    for(int i=1;i<=n;i++)
    if(u!=i)
    cout<<last_edge[i]<<" ";	
}

int main()
{
    std::ios::sync_with_stdio(false);
	int n,m,x,y,i,j,u;
	long long int z; 
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y>>z;
		adj[x].push_back(y);
		adj[y].push_back(x);
		w[x].push_back(z);
		w[y].push_back(z);
		num[x].push_back(i+1);
		num[y].push_back(i+1);
		another_weight[i+1]=z;
	}
	cin>>u;
	dijkstra(u,n);
}
