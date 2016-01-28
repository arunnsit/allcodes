#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<limits.h>
#include<iomanip>
#define N 1000000

using namespace std;

int arr[N],n,q;

struct node
{
	int ma;
	int mi;
};

node tree[N];
node merge(node a,node b)
{
	node c;
	c.ma=max(a.ma,b.ma);
	c.mi=min(a.mi,b.mi);
	return c;
}

void make_tree(int curr,int l,int r)
{
	if(l==r)
	{
		tree[curr].ma=arr[l];
		tree[curr].mi=arr[l];
		return ;
	}
	int mid=l+(r-l)/2;
	make_tree(2*curr+1,l,mid);
	make_tree(2*curr+2,mid+1,r);
	tree[curr]=merge(tree[2*curr+1],tree[2*curr+2]);
}
node nulliy()
{
	node c;
	c.ma=INT_MIN;
	c.mi=INT_MAX;
	return c;
}
node query(int curr,int l,int r,int qs,int qe)
{   
	if(r<qs||l>qe)
		return nulliy();
    if(qs<=l&&r<=qe)
    	return tree[curr];
    int mid=l+(r-l)/2;
    return merge(query(2*curr+1,l,mid,qs,qe),query(2*curr+2,mid+1,r,qs,qe));
}
/*
void pointupdate(int curr,int l,int r,int point,int value)
{
	if(l==r&&point==l)
	{
		tree[curr].sum=value;
		arr[l]=value;
		return;
	}
	int mid=l+(r-l)/2;
	if(point<=mid)
		pointupdate(2*curr+1,l,mid,point ,value);
	else 
		pointupdate(2*curr+2,mid+1,r,point,value);
	tree[curr]=merge(tree[2*curr+1],tree[2*curr+2]);
}*/

int main()
{
	std::ios::sync_with_stdio(false);
    cout<<fixed;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	make_tree(0,0,n-1);
	cin>>q;
	int l,r,range_min,range_max,lm,rm;
	double sol=0;

	while(q--)
	{
		cin>>l>>r;
		range_min=query(0,0,n-1,l,r).mi;
		range_max=query(0,0,n-1,l,r).ma;
		//cout<<range_max<<" "<<range_min<<endl;
		lm=query(0,0,n-1,0,l-1).ma;
		rm=query(0,0,n-1,r+1,n-1).ma;
		sol=max((double)(range_max-range_min)/2.0,max((double)lm,(double)rm))+(double)range_min;
		cout<<setprecision(1)<<(double)sol<<endl;
	}

	
}