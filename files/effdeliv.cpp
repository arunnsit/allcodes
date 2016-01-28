#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
struct node{
	int v,val;

};
vector<node> adj[100009];
struct node2{
	int a,b,v,c;
};
node2 aa[100009];
bool cmp(node2 a,node2 b)
{
	if(a.c==b.c)return a.v<b.v;
	else return a.c>b.c;
}
int visit[100009]={0};
queue<node> q;
void bfs(int start,int l)
{   visit[start]=l;
	printf("%d %d\n",start,l);
	if(l==0)visit[start]=-1;
	for(int i=0;i<adj[start].size();i++){
		if(visit[adj[start][i].v]==0)
			q.push(adj[start][i]);
	}
	while(!q.empty())
	{   int x=q.front().v;
		q.pop();
		bfs(x,l+1);

	}

}
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int x,y,z,k,i,j,S,D,W;
	while(m--)
	{
		scanf("%d %d %d",&x,&y,&z);
		node temp ;
        temp.v=x;
        temp.val=z;
        adj[y].push_back(temp);
        temp.v=y;
        adj[x].push_back(temp);
	}
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{scanf("%d %d %d %d",&aa[i].a,&aa[i].b,&aa[i].v,&aa[i].c);}
    sort(aa,aa+k,cmp);
    scanf("%d %d %d",&S,&D,&W);
    bfs(S,0);
    for(i=1;i<=n;i++)printf("%d ",visit[i]);





}