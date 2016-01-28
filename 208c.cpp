#include<stdio.h>
#include<queue>
#include<vector>
using namespace std;
vector<int> adj[202];
struct node{
	long long int ways;
	long long length;
	long long int mark;
};
queue<int> q[202];
node sol[202];
int visited[202]={0};
int bfs(int start){
	visited[start]=1;
	int i;
	for(i=0;adj[start].size();i++)
	{
		if(!visited[adj[start][i]])
		{
			q.push(adj[start][i]);
		}

	}

}
int main()
{
	int n,m,x,y,i;
	scanf("%d %d",&n,&m);
	for(i=0;i<=n;i++){
		sol[i].ways=0;
		sol[i].length=-1;
		sol[i].mark=0;
	}
	for(i=0;i<m;i++){
		scanf("%d %d",&x,&y);
		adj[x].push_back(y);
	}



}