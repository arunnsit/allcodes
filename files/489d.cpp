#include<stdio.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> adj[3009];
int main()
{
	int x,y,z,i,j,k,n,m;
	cin>>n>>m;
	while(m--)
    {
    	cin>>x>>y;
    	adj[y].push_back(x);
    }
    long long int s=0;
    for(i=1;i<=n;i++)
    { int c[3009]={0};
    	for(j=0;j<adj[i].size();j++)
    		for(k=0;k<adj[adj[i][j]].size();k++)
    			if(adj[adj[i][j]][k]!=i)
    			{
    				s+=c[adj[adj[i][j]][k]];
    				c[adj[adj[i][j]][k]]++;
    			}
    }
    cout<<s<<endl;


    }

