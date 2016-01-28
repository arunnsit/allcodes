#include<stdio.h>
#include <vector>
using namespace std;
#define N 10100
#define LN 17
std::vector<int> adj[N],cost[N],index;
int parent[LN+2][N],childcount[N],depth[N],chainhead[N],chaincount[N],base[N],ptr=0,posinbase[N],chain=1,n;
int tree[6*N];

void maketree(int curnode,int left ,int right)
{
	if(left==right)
		{
			tree[curnode]=base[left];
			return;
		}
	int mid=left+((right-left)>>1);
	maketree((curnode<<1)+1,left,mid);
	maketree((curnode<<1)+2,mid+1,right);
	tree[curnode]=(tree[(curnode<<1)+1]>tree[(curnode<<1)+2])?tree[(curnode<<1)+1]:tree[(curnode<<1)+2];
}
int querytree(int curnode,int left,int right,int low ,int high)
{   
	if(right<low||left>high)return -1;
	if(low<=left&&right<=high){
		return tree[curnode];
	}	
	int mid=left+((right-left)>>1);
	int x=querytree((curnode<<1)+1,left,mid,low,high);
	int y=querytree((curnode<<1)+2,mid+1,right,low,high);
	//printf("left %d right %d low %d high %d return: %d %d\n",left,right,low,high,x,y);
	return x>y?x:y;
}

void update(int curnode ,int left ,int right,int pos)
{
	if(left==right&&pos==left)
	{
		tree[left]=base[left];
		return;
	}
	int mid=left+((right-left)>>1);
	if(pos>=left&&pos<=mid)maketree((curnode<<1)+1,left,mid);
	else maketree((curnode<<1)+2,mid+1,right);
	tree[curnode]=(tree[(curnode<<1)+1]>tree[(curnode<<1)+2])?tree[(curnode<<1)+1]:tree[(curnode<<1)+2];
}
int LCA(int u, int v) {
	if(depth[u] < depth[v]) swap(u,v);
	int diff = depth[u] - depth[v];
	for(int i=0; i<LN; i++) if( (diff>>i)&1 ) u = parent[i][u];
	if(u == v) return u;
	for(int i=LN-1; i>=0; i--) if(parent[i][u] != parent[i][v]) {
		u = parent[i][u];
		v = parent[i][v];
	}
	return parent[0][u];
}
int moveup(int u,int v){
	//printf("u:%d v:%d chainheads:%d %d posinbase:%d %d\n",u,v,chainhead[u],chainhead[v],posinbase[u],posinbase[v]);
	if(chainhead[u]==chainhead[v])return querytree(0,2,n,posinbase[v],posinbase[u]);
	int x,y;
	x=querytree(0,2,n,posinbase[u],posinbase[chainhead[u]]);
	y=moveup(parent[0][chainhead[u]],v);
	return x;
}

int query(int u,int v){
	int l=LCA(u,v);
	//printf("query distributed b/w :%d - %d , %d - %d\n",u,l,l,v);
	int x=moveup(u,l);
	int y=moveup(v,l);
	return x>y?x:y;
}

void HLD(int curnode,int head,int prev,int _cost){
	chainhead[curnode]=head;
	chaincount[curnode]=chain;
	base[++ptr]=_cost;
    posinbase[curnode]=ptr;
    
    int pos=-1,ma=-1,i;
    for(i=0;i<adj[curnode].size();i++){
    	if(adj[curnode][i]!=prev&&ma<childcount[adj[curnode][i]]){
    		ma=childcount[adj[curnode][i]];
    		pos=i;
       	}
    }

    if(pos!=-1)HLD(adj[curnode][pos],head,curnode,cost[curnode][pos]);
    for(i=0;i<adj[curnode].size();i++){
    	if(adj[curnode][i]!=prev&&i!=pos)
    	{   chain++;
    		HLD(adj[curnode][i],adj[curnode][i],curnode,cost[curnode][i]);
    }}
}

void dfs(int frmx ,int prev,int _depth){
	parent[0][frmx]=prev;
	depth[frmx]=_depth;
    childcount[frmx]=1;

	for(int i=0;i<adj[frmx].size();i++){
		if(adj[frmx][i]!=prev){
        dfs(adj[frmx][i],frmx,_depth+1);
        childcount[frmx]+=childcount[adj[frmx][i]];
		}
	}
}
int main(){
	int i,l,j,u,v,c,t;
	scanf("%d",&t);
	while(t--){
	scanf("%d",&n);
	for(i=0;i<n-1;i++){
		scanf("%d %d %d",&u,&v,&c);
		adj[u].push_back(v);
		adj[v].push_back(u);
		cost[u].push_back(c);
		cost[v].push_back(c);
		index.push_back(u>v?u:v);
	}
	dfs(1,1,0);
    HLD(1,1,1,0);
    maketree(0,2,n);
    //for(j=0;j<2*n;j++)printf("%d :%d\n",j,tree[j]);

    for(i=1;i<LN;i++)
    for(j=1;j<=n;j++){
    	if(parent[i-1][j]!=-1)
    	parent[i][j]=parent[i-1][parent[i-1][j]];
    }
    char s[100];
    int x,y;
    scanf("%s",s);
    while(s[0]!='D')
    {
    	scanf("%d %d",&x,&y);
    	if(s[0]=='Q')printf("%d\n",query(x,y));
    	else
    	{
    		base[posinbase[index[x-1]]]=y;
    		update(0,2,n,posinbase[index[x-1]]);

    	}
    	    scanf("%s",s);
    }
    for(i=0; i<=n+1; i++) {
			adj[i].clear();
			cost[i].clear();
			for(int j=0; j<=LN; j++) parent[j][i] = -1;
		}
	    chain=1;
	    ptr=0;
		index.clear();
}
}