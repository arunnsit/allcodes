#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> ed[100006];
int vis[100009]={0};
long long int sol=0;

int dfs(int start,long long int len,int pa)
{   
	sol=sol>len*(ed[start].size())?sol:len*(ed[start].size());
	//cout<<"s:"<<start<<" s:"<<sol<<" len:"<<len<<endl;
	for(int i=0;i<ed[start].size();i++)
	{
		if(ed[start][i]!=pa)
		{   
			if(ed[start][i]>start)
				dfs(ed[start][i],len+1,start);
			
		}
	}
	return 0;
}

int main()
{
	int n,m,i,j,k,x,y;
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y;
		x--;
		y--;
		ed[x].push_back(y);
		ed[y].push_back(x);
	}
	for(i=0;i<n;i++)
		if(!vis[i])
			dfs(i,1,-1);
	cout<<sol<<endl;	
}