#include<stdio.h>
int b[8][2]={{1,1},{1,-1},{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{-1,1}};
	char a[52][52];
	int coun[52][52]={0};
	int i,j,k,n,m;

void dfs(int frmx,int frmy,int tox,int toy,int c){
	int i,x,y;
	        int k=0;

	for(i=0;i<8;i++)
	{
		x=tox+b[i][0];
		y=toy+b[i][1];
		//printf("x%d y%d tox%d toy%d %c %c\n",x,y,tox,toy,a[x][y],a[tox][toy]);
		if((x!=frmx||y!=frmy)&&x>=0&&y>=0&&x<n&&y<m&&a[x][y]-a[tox][toy]==1)
			{if(!coun[x][y])dfs(tox,toy,x,y,c+1);
				k=k>coun[x][y]?k:coun[x][y];}
	}
			coun[tox][toy]=k+1;		


}
int main(){
	scanf("%d %d",&n,&m);
	int p=0;
	while(n&&m){
		p++;
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	k=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)coun[i][j]=0;
	for(i=0;i<n;i++)
		for(j=0;j<m;j++){
			if(!coun[i][j]){
				dfs(i,j,i,j,1);
			}
		}
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)if(a[i][j]=='A')k=k>coun[i][j]?k:coun[i][j];
		printf("Case %d: %d\n",p,k);
			scanf("%d %d",&n,&m);

}
}