#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
struct node
{
	long long int sum,prefix,suffix,sol,trip;
};
node tree[1000000];
node merge(node a,node b)
{
	node c;
	c.sum=a.sum+b.sum;
	c.prefix=max(a.prefix,a.sum+b.prefix);
	c.suffix=max(b.suffix,b.sum+a.suffix);
	c.sol=max(max(a.sol,b.sol),b.prefix+a.suffix);
	c.trip=0;
	return c;
}
int a[1000000];
node make_tree(int curr,int l,int r)
{
	if(l==r)
	{
		tree[curr].sum=a[l];
		tree[curr].prefix=a[l];
		tree[curr].suffix=a[l];
		tree[curr].sol=a[l];
		tree[curr].trip=0;
		return tree[curr];
	}
	int mid=l+(r-l)/2;
	return tree[curr]=merge(make_tree((curr<<1)+1,l,mid),make_tree((curr<<1)+2,mid+1,r));
}
node query(int curr,int l,int r,int x,int y)
{   if(x>y)
	{
		node temp;
		temp.sum=-99999999999;
		temp.prefix=-99999999999;
		temp.suffix=-99999999999;
		temp.sol=-9999999999;
		return temp;
	}
	if(y<l||r<x)
	{   node temp;
		temp.trip=1;
		return temp;
	}
	if(x<=l&&r<=y)
		return tree[curr];
	int mid=l+(r-l)/2;
	node a,b,c;
	
		a=query(2*curr+1,l,mid,x,y);
		b=query(2*curr+2,mid+1,r,x,y);
		if(a.trip&&b.trip)
		{
			c.trip=1;
		}
		else if(a.trip==0&&b.trip==0)
		{
			c=merge(a,b);
		}
		else if(a.trip)
		{
			c=b;
		}
		else c=a;
	

	return c;
}
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,k,q;
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		make_tree(0,0,n-1);
        scanf("%d",&q);
        while(q--)
        {
        	int x,y,x2,y2;
        	scanf("%d %d %d %d",&x,&y,&x2,&y2);
        	x--;
        	y--;
        	x2--;
        	y2--;
        	//cout<<"prefix:"<<query(0,0,n-1,x,y).prefix<<" suffix:"<<query(0,0,n-1,x,y).suffix<<" sol:"<<query(0,0,n-1,x,y).sol<<endl;
        	if(y>=x2)
        		{
        			printf("%lld\n",max(max(query(0,0,n-1,x,x2-1).suffix+query(0,0,n-1,x2,y2).prefix,query(0,0,n-1,x,y).suffix+query(0,0,n-1,y+1,y2).prefix),query(0,0,n-1,x2,y).sol));
        		}	
        	else
        	{
        		if(y==x2-1)
        			printf("%lld\n",query(0,0,n-1,x,y).suffix+query(0,0,n-1,x2,y2).prefix);
                else
                	printf("%lld\n",query(0,0,n-1,x,y).suffix+query(0,0,n-1,y+1,x2-1).sum+query(0,0,n-1,x2,y2).prefix);

        	}

        }
	}

}