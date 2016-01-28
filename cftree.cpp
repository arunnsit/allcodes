#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
 
using namespace std;
 
vector <int> adj[100009],another_store[100009];
vector<pair<int,int> > node_num(100009),query;
int n,m,mod=1000000007,val=0,block,level[100009];
 
long long int arr[100009],fibo[200009],temp;
 
int dfs_ranger(int start,int parent)
{
	int sub=0;
    val++;
    node_num[start].first=val;
	for(int i=0;i<adj[start].size();i++)
	if(adj[start][i]!=parent)
	{
		sub+=dfs_ranger(adj[start][i],start);
	}
	node_num[start].second=node_num[start].first+sub;
	return sub+1;
}
void dfs_level(int start,int parent,int len)
{
	level[start]=len;
	for(int i=0;i<adj[start].size();i++)
	if(adj[start][i]!=parent)
	{
		dfs_level(adj[start][i],start,len+1);
	}
}
void rebuild(int start,int parent,int adder, int prevadder)
{   
	//cout<<" start :"<<start<<" add:"<<adder<<" prev:"<<prevadder<<endl;
    //cout<<"at:"<<start<<endl;
    temp=prevadder;
    prevadder=adder;
    adder=(adder+temp)%mod;
	for(int i=0;i<another_store[start].size();i++)
	{   
		//cout<<"upadting:"<<another_store[start][i]<<endl;
		adder=(adder+fibo[another_store[start][i]])%mod;
		prevadder=(prevadder+fibo[another_store[start][i]-1])%mod;
	}
    arr[start]=(arr[start]+adder)%mod;
    another_store[start].clear();
 
    for(int i=0;i<adj[start].size();i++)
	if(adj[start][i]!=parent)
	{
		rebuild(adj[start][i],start,adder,prevadder);
	}
}
int main()
{
	    std::ios::sync_with_stdio(false);
 
	int x,y;
    char ch;
    long long int sol=0;
 
	cin>>n>>m;
    
    fibo[1]=1;
    block=sqrt(m);
    for(int i=2;i<=200005;i++)
    	fibo[i]=(fibo[i-1]+fibo[i-2])%mod;
 
	for(int i=2;i<=n;i++)
	{
		cin>>x;
		adj[x].push_back(i);
		adj[i].push_back(x);
	}
	dfs_ranger(1,0);
	dfs_level(1,0,1);
	while(m--)
	{
		cin>>ch;
 
		if(ch=='Q')
		{
			cin>>x;
            sol=arr[x];
			for(int i=0;i<query.size();i++)
			{
				//check for affecting updates
				if(node_num[query[i].first].first<=node_num[x].first&&node_num[query[i].first].second>=node_num[x].second)
				{
					sol=(sol+fibo[level[x]-level[query[i].first]+query[i].second])%mod;
 
				}
 
			}
			cout<<sol<<endl;
		}
		else
		{
			cin>>x>>y;
            another_store[x].push_back(y);
			if(query.size()==block)
			{
				//make tree
				rebuild(1,0,0,0);
				query.clear();
			}
			else
			{
				//insert in the buffer
				query.push_back(make_pair(x,y));
			}
		}
 
 
	}
} 