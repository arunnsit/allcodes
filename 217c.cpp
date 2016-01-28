#include<stdio.h>
#include<algorithm>
	int n,x,y,p=0,q=0,i,j;
int graph[1051][1051]={0},visited[1051][1051]={0};
int dfs(int frmx,int frmy){
	if(visited[frmx][frmy])return 0;
	int i;
	visited[frmx][frmy]=1;
	for(i=1;i<=p;i++)if(frmx+i>=0&&frmx+i<=p&&graph[frmx+i][frmy])dfs(frmx+i,frmy);
	for(i=1;i<=p;i++)if(frmx-i>=0&&frmx-i<=p&&graph[frmx-i][frmy])dfs(frmx-i,frmy);
	for(i=1;i<=q;i++)if(frmy+i>=0&&frmy+i<=q&&graph[frmx][frmy+i])dfs(frmx,frmy+i);
	for(i=1;i<=q;i++)if(frmy-i>=0&&frmy-i<=q&&graph[frmx][frmy-i])dfs(frmx,frmy-i);
    return 0;
}
int main(){
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&x,&y);
		graph[x][y]=1;
		p=p>x?p:x;
		q=q>y?q:y;
	}p++;
	q++;
	int coun=0;
	for(i=0;i<=p;i++){
		for(j=0;j<=q;j++){
			if(graph[i][j]&&!visited[i][j]){
				dfs(i,j);
				coun++;
			}
		}

	}
	printf("%d\n",coun-1);

	
}