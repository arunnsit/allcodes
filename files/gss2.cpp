#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <unordered_map>
#include <limits.h>
#include <cstdio>
using namespace std;
struct q{
	int x,y,no,sol;
};

q qs[1000009];
bool cmp(q a,q b)
{  
   if(a.y==b.y)
   return a.x<=b.x; 
   return a.y<b.y;
}
struct node
{
	long long int sol;
	long long int lazy_add;
	long long int sum;
	long long int evlazy_add;
};
node tree[1000000]={0};
int a[200009];
node merge(node a,node b)
{
	node c;
	c.lazy_add=0;
	c.sum=max(a.sum,b.sum);
	c.sol=max(a.sol,b.sol);
	c.evlazy_add=0;
	return c;
}
node make_tree(int curr,int l,int r)
{   

	if(l==r)
	{
		tree[curr].sol=0;
		tree[curr].lazy_add=0;
		tree[curr].evlazy_add=0;
		tree[curr].sum=0;
		return tree[curr];
	}
	int mid=l+(r-l)/2;
	node x=make_tree(2*curr+1,l,mid);
	node y=make_tree(2*curr+2,mid+1,r);
    tree[curr]=merge(x,y);
    //cout<<"curr:"<<curr<<" l:"<<l<<" r:"<<r<<" sol:"<<tree[curr].sol<<endl;
	return tree[curr];
}
void flushdown(int curr)
{
		tree[2*curr+1].evlazy_add=max(tree[2*curr+1].evlazy_add,tree[2*curr+1].lazy_add+tree[curr].evlazy_add);
		tree[2*curr+1].sol=max(tree[2*curr+1].sol,tree[2*curr+1].sum+tree[curr].evlazy_add);
        tree[2*curr+1].lazy_add+=tree[curr].lazy_add;
        tree[2*curr+1].sum+=tree[curr].lazy_add;

        tree[2*curr+2].evlazy_add=max(tree[2*curr+2].evlazy_add,tree[2*curr+2].lazy_add+tree[curr].evlazy_add);
		tree[2*curr+2].sol=max(tree[2*curr+2].sol,tree[2*curr+2].sum+tree[curr].evlazy_add);
        tree[2*curr+2].lazy_add+=tree[curr].lazy_add;
        tree[2*curr+2].sum+=tree[curr].lazy_add;

        tree[curr].lazy_add=0;
        tree[curr].evlazy_add=0;
}
node update(int curr,int l,int r,int x,int y,int add)
{   flushdown(curr);
	if(y<l||r<x)
	{
		node null_node;
		null_node.sum=0;
		null_node.sol=0;
        null_node.lazy_add=0;
        null_node.evlazy_add=0;
        return null_node;
	}
	if(x<=l&&r<=y)
	{
		tree[curr].lazy_add+=add;
		tree[curr].sum+=add;
		tree[curr].sol=max(tree[curr].sol,tree[curr].sum);
		tree[curr].evlazy_add=max(tree[curr].evlazy_add,tree[curr].lazy_add);
		flushdown(curr);
		return tree[curr];
	}
	int mid=l+(r-l)/2;
	node a,b;
	a=update(2*curr+1,l,mid,x,y,add);
	b=update(2*curr+2,mid+1,r,x,y,add);
	tree[curr]=merge(tree[2*curr+1],tree[2*curr+2]);
	//cout<<"curr:"<<curr<<" l:"<<l<<" r:"<<r<<" x:"<<x<<" y:"<<y<<" sol:"<<tree[curr].sol<<" sum:"<<tree[curr].sum<<endl;
	return tree[curr];
}
node query(int curr,int l,int r,int x,int y)
{
	flushdown(curr);
	if(y<l||r<x)
	{
		node null_node;
		null_node.sum=0;
		null_node.sol=0;
        null_node.lazy_add=0;
        null_node.evlazy_add=0;
        return null_node;
	}
	if(x<=l&&r<=y)
	{
		flushdown(curr);
		return tree[curr];
	}
	int mid=l+(r-l)/2;
	node a,b;
	a=query(2*curr+1,l,mid,x,y);
	b=query(2*curr+2,mid+1,r,x,y);
	node c=merge(a,b);
	//cout<<"curr:"<<curr<<" l:"<<l<<" r:"<<r<<" x:"<<x<<" y:"<<y<<" sol:"<<c.sol<<" sum:"<<c.sum<<endl;
	return c;
}
int lppos[1000000]={0};
int lpne[1000000]={0};
long long int finalsol[100009]={0};
int main()
{   std::cout.sync_with_stdio(false);
	int n,i,j,k,qcoun;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
    cin>>qcoun;
	for(i=0;i<qcoun;i++)
		{
			cin>>qs[i].x>>qs[i].y;
			qs[i].x--;
            qs[i].y--;
			qs[i].no=i;
			qs[i].sol=0;
		}
	sort(qs,qs+qcoun,cmp);

	int qpos=0,cp;
	for(i=0;i<n;i++)
	{   
		if(a[i]>=0)
		{
			update(0,0,n-1,lppos[a[i]],i,a[i]);
		    lppos[a[i]]=i+1;
		}
		else
		{
			update(0,0,n-1,lpne[-a[i]],i,a[i]);
		    lpne[-a[i]]=i+1;
		}
		
		while(qs[qpos].y==i&&qpos<qcoun)
		{  
			 
			finalsol[qs[qpos].no]=query(0,0,n-1,qs[qpos].x,qs[qpos].y).sol;
			qpos++;
		}
	}

	for(i=0;i<qcoun;i++)
		cout<<finalsol[i]<<endl;
}