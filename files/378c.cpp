#include<stdio.h>
	char a[501][501];
	int visited[501][501]={0},open=0,dir[4][2]={{0,-1},{0,1},{1,0},{-1,0}},c=0,k;
		int n,m,i,j;


int dfs(int frmx,int frmy,int tox,int toy){
	int i,x,y;
	if(c==k)return 0;
	for(i=0;i<4;i++){
		x=tox+dir[i][0];
		y=toy+dir[i][1];
		if(x>=0&&y>=0&&x<n&&y<m&&a[x][y]=='.'&&visited[x][y]==0&&c<k&&(frmx!=x||frmy!=y)){
			visited[x][y]=1;
			c++;
			dfs(x-dir[i][0],y-dir[i][1],x,y);
		}

	}
	return 0;

}

int main(){
	scanf("%d %d %d",&n,&m,&k);
    
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			if(a[i][j]=='.')open++;
		}
	k=open-k;	
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			if(a[i][j]=='.'&&!visited[i][j]&&c<k){
				visited[i][j]=1;
				c++;
				dfs(i,j,i,j);
			}
		}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
		if(visited[i][j]==0&&a[i][j]=='.'){
			a[i][j]='X';
		}
		printf("%c",a[i][j]);
		}printf("\n");}		
}