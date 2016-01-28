#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int>v[80000];
vector<int>ancestor[80000];
int a[80000],b[80000];
int   L[100000];
int ances(int start,int parent,int len)
{   
	L[start]=len;
	for(int i=0;i<v[start].size();i++)
	{  if(v[start][i]!=parent)
	   {   
		ancestor[v[start][i]].push_back(start);
		ances(v[start][i],start,len+1);
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
          P[i][0] = ancestor[i][0];
   
  //bottom up dynamic programing
      for (j = 1; 1 << j < N; j++)
         for (i = 0; i < N; i++)
             if (P[i][j - 1] != -1)
                 P[i][j] = P[P[i][j - 1]][j - 1];
  }
int lca_query( int N,int p, int q)
  {
      int tmp, log, i;
   
  //if p is situated on a higher level than q then we swap them
      if (L[p] < L[q])
          tmp = p, p = q, q = tmp;
  
  //we compute the value of [log(L[p)]
      for (log = 1; 1 << log <= L[p]; log++);
      log--;
   
  //we find the ancestor of node p situated on the same level
  //with q using the values in P
      for (i = log; i >= 0; i--)
          if (L[p] - (1 << i) >= L[q])
              p = P[p][i];
   
      if (p == q)
          return p;
   
  //we compute LCA(p, q) using the values in P
      for (i = log; i >= 0; i--)
          if (P[p][i] != -1 && P[p][i] != P[q][i])
              p = P[p][i], q = P[q][i];
   
      return T[p];
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
		x--;
		y--;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
		cin>>b[i];
	ances(0,-2,0);
	ancestor[1].push_back(-2);
	process(n);
	query()
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
		    x--;
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
 