#include <iostream>
#include <vector>
#include <unordered_map>
#include <stack>
#include <algorithm>
#include <set>
#include <utility>    
using namespace std;
vector<int> v[100009];
int color[100009]={0};
struct node
{
	int occ;
	long long int sum;
};

struct classcomp {
  bool operator() (node a,node b) 
  {return a.occ<b.occ;}
  bool operator==(node a)
  {return a.occ;}
};

unordered_map<int,int> ma[100009];
set<node,classcomp> sets[100009];
long long int fsol[100009]={0};
long long int mcolor_coun=0;
unordered_map<int, int>::iterator it;
set<node>::iterator sit;
node temp,temp2;
int mc=0,u=0;
int marks[100009]={0};
void merge(int a,int b)
{
	for (it=ma[b].begin(); it!=ma[b].end(); ++it)
    {   temp.occ=ma[a][it->first];
    	ma[a][it->first]+=it->second;
        
        if(sets[a].find(temp)!=sets[a].end())
	{
		temp2=*(sets[a].find(temp));
		sets[a].erase(temp);
		temp2.sum-=it->first;
		sets[a].insert(temp2);

		temp.occ=ma[a][it->first];
		temp2.occ=temp.occ;
		temp2.sum=0;
		if(sets[a].find(temp)!=sets[a].end())
	    {
	    	temp2=*(sets[a].find(temp));
	    	sets[a].erase(temp);
	    }
	    temp2.sum+=(it->first);
	    sets[a].insert(temp2);
	}
	else
	{
		temp.occ=ma[a][it->first];
		temp2.occ=temp.occ;
		temp2.sum=0;
		if(sets[a].find(temp)!=sets[a].end())
	    {
	    	temp2=*(sets[a].find(temp));
	    	sets[a].erase(temp);
	    }
	    temp2.sum+=it->first;
	    sets[a].insert(temp2);
	}
    }
}
int max_map,tmp,siz,masize=0;
int dfs(int start,int pa)
{    
	max_map=0,masize=0;
	int ch=0;
	stack<int> st;
	for( int i=0;i<v[start].size();i++)
	if(v[start][i]!=pa){  
		tmp=dfs(v[start][i],start);
		st.push(tmp);
		ch=1;
		siz=ma[tmp].size();
		if(masize>=siz)
		{
			masize=siz;
			max_map=tmp;
		}
	}
	if(!ch)
		{   
			while(marks[u])u++;
			marks[u]=1;
			max_map=mc++;
		}

	while(!st.empty())
	{   

		if(max_map!=st.top())
		{
			merge(max_map,st.top());
			sets[st.top()].clear();
			ma[st.top()].clear();
			marks[st.top()]=0;
			u=0;
		}
		st.pop();
	}

	ma[max_map][color[start]]++;
	temp.occ=ma[max_map][color[start]]-1;
	
	if(ch==1&&sets[max_map].find(temp)!=sets[max_map].end())
	{
		temp2=*(sets[max_map].find(temp));
		sets[max_map].erase(temp);
		temp2.sum-=color[start];
		sets[max_map].insert(temp2);

		temp.occ=ma[max_map][color[start]];
		temp2.occ=temp.occ;
		temp2.sum=0;
		if(sets[max_map].find(temp)!=sets[max_map].end())
	    {
	    	temp2=*(sets[max_map].find(temp));
	    	sets[max_map].erase(temp);
	    }
	    temp2.sum+=color[start];
	    sets[max_map].insert(temp2);
	}
	else
	{
		temp.occ=ma[max_map][color[start]];
		temp2.occ=temp.occ;
		temp2.sum=0;
		if(sets[max_map].find(temp)!=sets[max_map].end())
	    {
	    	temp2=*(sets[max_map].find(temp));
	    	sets[max_map].erase(temp);
	    }
	    temp2.sum+=color[start];
	    sets[max_map].insert(temp2);
	}
    sit=sets[max_map].end();
    sit--;
    fsol[start]=(*sit).sum;
	return max_map;
}
int main()
{
	int n,i,j,k,x,y;
	std::ios::sync_with_stdio(false);
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>color[i];
	for(i=0;i<n-1;i++)
	{
		cin>>x>>y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1,-1);
	for(i=1;i<=n;i++)
		cout<<fsol[i]<<" ";
}