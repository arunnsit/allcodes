#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int>v[80000];
vector<int>ancestor[80000];
int a[80000],b[80000];
int ances(int start,int parent)
{
	for(int i=0;i<v[start].size();i++)
	{  if(v[start][i]!=parent)
	   {   
		ancestor[v[start][i]].push_back(start);
		ances(v[start][i],start);
	   }		
	}
	return 1;
}
int T[100000], P[100000][25];
void process(int N)
  {
      int i, j;
   
  //we initialize every element in P with -1
      for (i = 0; i < N; i++)
          for (j = 0; 1 << j < N; j++)
              P[i][j] = -1;
   
  //the first ancestor of every node i is T[i]
      for (i = 0; i < N; i++)
          P[i][0] = T[i];
   
  //bottom up dynamic programing
      for (j = 1; 1 << j < N; j++)
         for (i = 0; i < N; i++)
             if (P[i][j - 1] != -1)
                 P[i][j] = P[P[i][j - 1]][j - 1];
  }

int main()
{
	int n,q;
	int sol=0,prev;
	cin>>n>>q;
	int i,j,x,y;
	for(i=0;i<n-1;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
		cin>>b[i];
	ances(1,-2);
	ancestor[1].push_back(-2);
	while(q--)
	{
		int type,po,op;
		cin>>type;
		if(type==1)
		{   cin>>op>>po;
			a[op]=po;
		}
		else
		{   
            sol=0;
		    cin>>x;
		    prev=x;
			while(x!=-2)
			{
				if(b[prev]>=a[x])
				sol++;
				x=ancestor[x][0];
			}
			cout<<sol<<endl;
		}
	}
}
 