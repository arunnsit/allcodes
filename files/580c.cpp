#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> adj[100009];
int v[100009]={0},c[100009],sol=0;
 
int dfs(int s,int m,int u,int l){
    int xoy=0;
	v[s]=1;
	for(int i=0;i<adj[s].size();i++)
		if(!v[adj[s][i]]){   xoy=1;
			dfs(adj[s][i],m,c[adj[s][i]]==0?0:u+1,max(l,u));
}
if(!xoy){
		l=max(l,u);
				//printf("%d %d\n",u,l);

		if(l<=m)sol++;
	}
return 0;
}
 
int main(){
	int n,m,i,j,k,x,y;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)scanf("%d",&c[i]);
	for(i=1;i<n;i++){scanf("%d%d",&x,&y);
	adj[x].push_back(y);
    adj[y].push_back(x);
	}
	dfs(1,m,c[1],c[1]);
	printf("%d\n",sol);
	}