#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
#include <limits.h>
#include <cstdio>
#include <math.h>
using namespace std;

long long int tree[5000000]={0};
long long int a[5000000]={0};
int lazy[5000000]={0};
void make_tree(int curr,int l,int r)
{   

	if(l==r)
	{
		tree[curr]=a[l];
		if(tree[curr]==1)
			lazy[curr]=1;
		else lazy[curr]=0;
		return ;
	}
	int mid=l+(r-l)/2;
	make_tree((curr<<1)+1,l,mid);
	make_tree((curr<<1)+2,mid+1,r);
    tree[curr]=tree[(curr<<1)+1]+tree[(curr<<1)+2];
    lazy[curr]=lazy[2*curr+1]&lazy[2*curr+2];

}
void update(int curr,int l,int r,int x,int y)
{   if(y<l||r<x)return;
	if(x<=l&&r<=y&&lazy[curr])
	{   //cout<<"hey";
		return;
	}
	if(l==r)
	{   
        a[l]=(long long int)sqrt(a[l]*1.0);
		tree[curr]=a[l];
		if(tree[curr]==1)
			lazy[curr]=1;
		else lazy[curr]=0;
		return;
	}
	int mid=l+(r-l)/2;
	update((curr<<1)+1,l,mid,x,y);
	update((curr<<1)+2,mid+1,r,x,y);
    lazy[curr]=lazy[2*curr+1]&lazy[2*curr+2];
	tree[curr]=tree[(curr<<1)+1]+tree[(curr<<1)+2];
}
long long int sol(int curr,int l,int r,int x,int y)
{
	if(y<l||r<x)
	{
		return 0;
	}
	if(x<=l&&r<=y)
		return tree[curr];
	int mid=l+(r-l)/2;
	return sol((curr<<1)+1,l,mid,x,y)+sol((curr<<1)+2,mid+1,r,x,y);
}
int main()
{
	std::cout.sync_with_stdio(false);
	int n,i,j,q,po=0;
	while(scanf("%d",&n)>0)
	{
	//	memset(tree,0,sizeof(tree));
       // memset(lazy,0,sizeof(lazy));

	
	for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		    make_tree(0,0,n-1);

	scanf("%d",&q);
	po++;    
	printf("Case #%d:\n",po);   
	while(q--)
	{
		int type,x,y;
		scanf("%d %d %d",&type,&x,&y);
		x--;
		y--;
		if(x>y)
		{
			int temp;
			temp=x;
			x=y;
			y=temp;
		}
	    if(type==1)
	    {
	    	printf("%lld\n",sol(0,0,n-1,x,y));
	    }
	    else
	    {
	    update(0,0,n-1,x,y);
	    }
	}
	printf("\n");
    }
}