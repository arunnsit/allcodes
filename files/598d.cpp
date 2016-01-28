#include<iostream>
using namespace std;
char a[1008][1008];
int vis[1008][1008]={0},vis2[1008][1008]={0};
int sol=0,n,m;
int dfs(int startx,int starty)
{  if(vis[startx][starty])return 0;
   if(startx>=0&&startx<n&&starty<m&&starty>=0){}
   else return 0;
   if(a[startx][starty]=='*'){sol++;return 0;}
   vis[startx][starty]=1;
   dfs(startx-1,starty);
   dfs(startx,starty+1);
   dfs(startx+1,starty);
   dfs(startx,starty-1);
   return 0;
}
int dfs2(int startx,int starty)
{  if(vis2[startx][starty]||a[startx][starty]=='*')return 0;
   if(startx>=0&&startx<n&&starty<m&&starty>=0){}
   else return 0;
   
   vis2[startx][starty]=sol;
   dfs2(startx-1,starty);
   dfs2(startx,starty+1);
   dfs2(startx+1,starty);
   dfs2(startx,starty-1);
   return 0;
}
int main()
{
	int i,j,k,q;
	cin>>n>>m>>q;
	for(i=0;i<n;i++)cin>>a[i];
     for(i=0;i<n;i++)
     	for(j=0;j<m;j++){
     		if(a[i][j]=='.'&&!vis[i][j]){
     			sol=0;
     			dfs(i,j);
     			dfs2(i,j);
     		}
     	}
    while(q--)
    {
    	cin>>i>>j;
    	cout<<vis2[i-1][j-1]<<endl;
    } 	

}