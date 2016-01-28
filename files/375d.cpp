#include<vector>
#include<math.h>
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
vector<int> adj[100009];
int color[100009],n,m,val=0,blocks=320,result=0,fsol[100009],freqofcolor[100009],freqoffreq[100009],whichon[100009],marks[100009];
struct assign
{
	int l,r;
};
assign prec[100009];
int dfs(int curr,int parent)
{   
	val++;
	int sub=0;
	prec[curr].l=val;
	whichon[val]=curr;
	for(int i=0;i<adj[curr].size();i++)
	if(adj[curr][i]!=parent){
		sub+=dfs(adj[curr][i],curr);
	}
	prec[curr].r=prec[curr].l+sub;
	return sub+1;
}
struct query
{
	int l,r,nos,block,k;
};

bool cmp(query a,query b)
{
	if(a.block==b.block)
		return a.r<b.r;
	else return a.block<b.block;
}
query q[100009];
inline void add(int pos)
{   

	int cur=whichon[pos];
	freqofcolor[color[cur]]++;
	freqoffreq[freqofcolor[color[cur]]]++;
	//cout<<"adding at "<<cur<<" "<<freqoffreq[freqofcolor[color[cur]]]<<endl;
}
inline void del(int pos)
{   
	
	int cur=whichon[pos];
	freqoffreq[freqofcolor[color[cur]]]--;
	freqofcolor[color[cur]]--;
	//cout<<"del at "<<cur<<" "<<freqoffreq[freqofcolor[color[cur]]]<<endl;
}
void check()
{
	for(int i=1;i<=n;i++)
		cout<<"hey:"<<prec[i].l<<" "<<prec[i].r<<endl;
}
int main()
{
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++)
		scanf("%d",&color[i]);
	int x,y;
	for(int i=0;i<n-1;i++)
	{
		scanf("%d %d",&x,&y);
		adj[x].push_back(y);
		adj[y].push_back(x);
	}
	dfs(1,1);
	//check();
	blocks=sqrt(n+0.0);
	for(int i=0;i<m;i++)
	{
		cin>>x>>y;
		q[i].l=prec[x].l;
		q[i].r=prec[x].r;
		q[i].k=y;
		q[i].nos=i;
		q[i].block=q[i].l/blocks;
	}
	sort(q,q+m,cmp);
	int curr_l=0,curr_r=0;
	for(int i=0;i<m;i++)
	{   
		//cout<<"q: "<<q[i].l<<" "<<q[i].r<<endl;
		while(q[i].l<curr_l)
		{   
			curr_l--;
			add(curr_l);
		}
		while(q[i].l>curr_l)
		{
			del(curr_l);
			curr_l++;
		}
		while(q[i].r<curr_r)
		{
			del(curr_r);
			curr_r--;
		}
		while(q[i].r>curr_r)
		{   
			curr_r++;
			add(curr_r);
		}
		//cout<<curr_l<<" "<<curr_r<<" "<<coun[1]<<" "<<coun[2]<<endl;
		fsol[q[i].nos]=freqoffreq[q[i].k];
	}
	for(int i=0;i<m;i++)
		printf("%d\n",fsol[i]);
}