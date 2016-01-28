#include<stdio.h>
#include<algorithm>
int graph[501][501]={0};
int n,i,x,y;
int graphtranspose[501][501]={0};
int stac[500]={0},pos=0;

int dfs(int start ,int vis[501],int graph[501][501]){
	vis[start]=1;
		//printf("yo :%d ",start);

	for(int i=0;i<n;i++){
		if(graph[start][i]&&!vis[i])
			dfs(i,vis,graph);
	}
	stac[pos++]=start;
	return 0;
}

int dfs2(int start ,int vis[501],int graph[501][501]){
	vis[start]=1;
	printf("%d ",start);
	for(int i=0;i<n;i++){
		if((graph[start][i]!=0)&&vis[i]==0)
			dfs2(i,vis,graph);
	}
	return 0;
}

int main(){
	scanf("%d",&n);
	int f=n;
	while(n--){
		scanf("%d %d",&x,&y);
		graph[x][y]=1;
		graphtranspose[y][x]=1;
	}
	n=f;
	int vis[501]={0};
	for(i=0;i<n;i++){
	    //printf("i:%d vis:%d\n",i,vis[i]);
		if(!vis[i]){
			dfs(i,vis,graph);
		}
	}
	int vis2[501]={0};
	for(i=pos-1;i>=0;i--){
		if(!vis2[stac[i]]){
			dfs2(stac[i],vis2,graphtranspose);
			printf("\n");
		}
	}
}