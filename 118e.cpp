#include<iostream>
#include<stdio.h>
#include<unordered_map>
#include<vector>
using namespace std;
vector <int> adj[100009];
int  visited[100009]={0};
vector <int> color[100009];
int cop[100009]={0};
int main()
{
	int n,m,x,y,i,u=0,k=0,j;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		scanf("%d",&cop[i]);
		color[cop[i]].push_back(i);
		if(color[cop[i]].size()==1)visited[u++]=cop[i];
	}
	while(m--)
	{scanf("%d %d",&x,&y);
adj[x].push_back(y);
adj[y].push_back(x);
	}
	int ma=-1,mu=0,fc=cop[0];
	unordered_map<int,int>umo;
	for(i=0;i<u;i++){
		int mv=0;
 umo.clear();
		for(j=0;j<color[visited[i]].size();j++){
			for(k=0;k<adj[color[visited[i]][j]].size();k++)
			{
				if(cop[adj[color[visited[i]][j]][k]]!=visited[i]&&!umo[cop[adj[color[visited[i]][j]][k]]]){
					mv++;
					umo[cop[adj[color[visited[i]][j]][k]]]++;
				}

			}
	}
	if(mv>ma||(mv==ma&&fc>visited[i])){
		ma=mv;
		fc=visited[i];
	}
	}
	printf("%d\n",fc);


	

}