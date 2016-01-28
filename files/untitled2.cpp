#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

vector<int>v[80000];
vector<int>ancestor[80000];
int a[80000],b[80000];
int subsize[100000]={0},depth[100000]={0};
int ances(int start,int parent,int _depth=0)
{   
	subsize[start]=1;
	depth[start]=_depth;
	for(int i=0;i<v[start].size();i++)
	{  if(v[start][i]!=parent)
	   {   
		ancestor[v[start][i]].push_back(start);
		ances(v[start][i],start,_depth+1);
		subsize[start]+=subsize[v[start][i]];
	   }		
	}
	return 1;
}
int chainNo=0,chainHead[100000]={0},chainPos[100000]={0},chainInd[100000]={0},chainSize[100000]={0},totalchains=0;

int segs[600010][50]={0};

void update(int curr,int point,int l,int h,int treeno,int add)
{   
	if(point<l||point>h)
		return ;
	if(l==h&&point==l)
	{
		segs[curr][treeno]+=add;
		return ;
	}
	int mid=l+(h-l)/2;
	if(point>=l&&point<=mid)
	{
	   update(2*curr+1,point,l,mid,treeno,add);	
	}
	else
		update(2*curr+2,point,mid+1,h,treeno,add);
	segs[curr][treeno]=	segs[2*curr+1][treeno]+	segs[2*curr+2][treeno];
	return ;
}

int query(int curr,int l,int h,int x,int y,int treeno)
{
	if(x>h||y<l)
		return 0;
	if(x>=l&&y<=h)
		return segs[curr][treeno];
	int mid=l+(h-l)/2;
	return query(2*curr+1,l,mid,x,y,treeno)+query(2*curr+2,mid+1,h,x,y,treeno);
}

void hld(int cur,int parent) {
    if(chainHead[chainNo] == -1) {
    	totalchains++;
    	chainHead[chainNo]=cur;
    }
    chainInd[cur] = chainNo;
    chainPos[cur] = chainSize[chainNo];
    chainSize[chainNo]++;
    int ind = -1,mai = -1;
    for(int i = 0; i < v[cur].size(); i++) {         
    	if(subsize[ v[cur][i] ] > mai&& v[cur][i]!=parent) {
            mai = subsize[ v[cur][i] ];
            ind = i;
        }
    }
 
    if(ind >= 0) hld( v[cur][ind],cur);
    for(int i = 0; i < v[cur].size(); i++) {
        if(i != ind&&v[cur][i]!=parent) {
            chainNo++;
            hld( v[cur][i],cur);
        }
    }
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
	for(i=0;i<=n;i++)
		chainHead[i]=-1;
	ances(0,-2);
	ancestor[0].push_back(-2);
	hld(0,-1);
	for(i=0;i<n;i++)
		{
			cin>>a[i];
			update(0,a[i],)
		}
	for(i=0;i<n;i++)
		cin>>b[i];
	
	
	/*for(i=0;i<n;i++)
		cout<<"curr:"<<i<<" head:"<<chainHead[chainInd[i]]<<"chainNo:"<<chainInd[i]<<endl;
	*/
	
	while(q--)
	{
		int type,x,c;
		cin>>type;
		if(type==1)
		{   cin>>c>>x;
			c--;
			a[c]=x;
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
 