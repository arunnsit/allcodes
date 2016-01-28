#include<iostream>
#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
using namespace std;
vector<int> v[3500];
struct node
{
	int vertice;
	int weight;
	int pa;
	 friend bool operator<(node a, node b)
    {
        return a.weight < b.weight;
    }

};

int mark[3500]={0};

int visit[3005]={0};
int weight[3005][3005]={0};
int main()
{   
    
	int m,n,x,y,a,b,c,d,e,f;
	cin>>n>>m;
	for(int i=0;i<=n;i++)
		for(int j=0;j<=n;j++)
			weight[i][j]=10000000;
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		v[x-1].push_back(y-1);
		v[y-1].push_back(x-1);
	}
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	int start;
	queue<int> q;
	for(int i=0;i<n;i++)
	{
		start=i;
		q.push(start);
		weight[start][start]=0;
		while(!q.empty())
		{
			start=q.front();
			q.pop();
			for(int j=0;j<v[start].size();j++)
			{   
				if(weight[i][v[start][j]]>weight[i][start]+1)
				{
					weight[i][v[start][j]]=weight[i][start]+1;
					q.push(v[start][j]);
				}
			}
		}
	}

	//cout<<weight[1][2]<<endl;
	//cout<<weight[d-1][e-1]<<endl;
	if(weight[a-1][b-1]>c||weight[d-1][e-1]>f)
		cout<<-1;
	else
	{   
		int ans=m-weight[a-1][b-1]-weight[d-1][e-1];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{  
				//if(ans-(weight[a-1][i]+weight[i][j]+weight[j][b-1]+weight[d-1][i]+weight[j][e-1])>=0)
				int sol1=0,sol2=0;
				if(weight[a-1][i]>weight[a-1][j])
				{
					sol1+=weight[a-1][j]+weight[i][b-1];
				}
				else sol1+=weight[a-1][i]+weight[j][b-1];

				if(weight[d-1][i]>weight[d-1][j])
				{
					sol2+=weight[d-1][j]+weight[i][e-1];
				}
				else sol2+=weight[d-1][i]+weight[j][e-1];
				if(sol1+weight[i][j]<=c&&sol2+weight[i][j]<=f)
				ans=max(ans,m-sol1-sol2-weight[i][j]);
				/*if(i==2&&j==3)
				{   
					cout<<weight[a-1][i]<<endl;
					cout<<weight[i][j]<<endl;
					cout<<weight[j][b-1]<<endl;
					cout<<weight[d-1][i]<<endl;
					cout<<weight[j][e-1]<<endl;

				}*/
			}
		}
		cout<<ans<<endl;
	}
	
}