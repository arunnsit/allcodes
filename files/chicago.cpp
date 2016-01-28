#include<stdio.h>
#include<algorithm>
#include<queue>

int adj[101][101]={0},visited[101]={0};
double cost[101]={0};

using namespace std;
void maxdij(int frm,int n){
	visited[frm]=1;
	for(int i=1;i<=n;i++){
		if(adj[frm][i]){
			cost[i]=max(cost[i],(double)(cost[frm]*adj[frm][i])/100.00);
		}
	}
}

int main(){
	int n ,m,x,y,p,i,j;
	scanf("%d",&n);
	while(n){
	scanf("%d",&m);
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++)adj[i][j]=0;
			cost[i]=0;
		visited[i]=0;
	}
    while(m--){
    	scanf("%d %d %d",&x,&y,&p);
    	adj[x][y]=p;
    	adj[y][x]=p;
    }
    cost[1]=100.000;
    for(i=1;i<=n;i++){
    	int pos=0;
    	double x=0.000;
    	for(j=1;j<=n;j++){
    		if((!visited[j]&&cost[j]>x)){
    			x=cost[j];
    			pos=j;
    	}}
    	maxdij(pos,n);
    }
    printf("%.6lf percent\n",cost[n]);
    	scanf("%d",&n);
}
} 