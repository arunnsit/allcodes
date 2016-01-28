#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
long long tree[1000006],input[100005],lazyadd[1000006]={0},lazymul[1000006],init[1000006]={0};

long long Merge(long long a,long long b)
{
	long long temp;
	temp = (a+b)%M;
	return temp;
}
long long getSolLazy(int low,int high,int index,int l,int r)
{
	if(high<l||high<low||low>r)
	return 0;
	if(init[index]!=0)
	{
		tree[index] = (high-low+1)*init[index];
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			init[2*index+1] = init[index];
			init[2*index+2] = init[index];
			lazyadd[2*index + 1] = 0;
			lazyadd[2*index + 2] = 0;
			lazymul[2*index + 1] = 1;
			lazymul[2*index + 2] = 1;
		}
		init[index] = 0;
	}
	if(lazyadd[index]!=0||lazymul[index]!=1)
	{
		if(lazymul[index]!=1)
		{
			tree[index]*=lazymul[index];
		}
		if(lazyadd[index]!=0)
		{
			tree[index] += (high-low+1)*lazyadd[index];
		}
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			lazyadd[2*index + 1] += lazyadd[index];
			lazyadd[2*index + 2] += lazyadd[index];
			lazymul[2*index + 1] *= lazymul[index];
			lazymul[2*index + 2] *= lazymul[index];
		}
		lazyadd[index] = 0;lazymul[index] = 1;
	}
	if(low>=l&&high<=r)
	return tree[index]%M;
	int mid = low + (high-low)/2;
	return Merge(getSolLazy(low,mid,2*index + 1,l,r),getSolLazy(mid+1,high,2*index + 2,l,r));
}
void LazyUpdateAdd(int low,int high,int index,int l,int r,int diff)
{
	if(init[index]!=0)
	{
		tree[index] = (high-low+1)*init[index];
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			init[2*index+1] = diff;
			init[2*index+2] = diff;
			lazyadd[2*index + 1] = 0;
			lazyadd[2*index + 2] = 0;
			lazymul[2*index + 1] = 1;
			lazymul[2*index + 2] = 1;
		}
		init[index] = 0;
	}
	if(lazymul[index]!=1||lazyadd[index]!=0)
	{
		if(lazymul[index]!=1)
		{
			tree[index] *= lazymul[index];
		}
		if(lazyadd[index]!=0)
		{
			tree[index] += (high-low+1)*lazyadd[index];
		}
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			lazyadd[2*index + 1] += lazyadd[index];
			lazyadd[2*index + 2] += lazyadd[index];
			lazymul[2*index + 1] *= lazymul[index];
			lazymul[2*index + 2] *= lazymul[index];
		}
		lazyadd[index] = 0;
		lazymul[index] = 1;
	}
	if(high<l||low>high||low>r)
	return;
	if(low>=l&&high<=r)
	{
		tree[index] += (high-low+1)*diff;
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			lazyadd[2*index+1] += diff;
			lazyadd[2*index+2] += diff;
		}
		return;
	}
	int mid = low + (high-low)/2;
	LazyUpdateAdd(low,mid,2*index + 1,l,r,diff);
	LazyUpdateAdd(mid+1,high,2*index + 2,l,r,diff);
	tree[index] = Merge(tree[2*index + 1],tree[2*index + 2]);
}
void LazyUpdateMul(int low,int high,int index,int l,int r,int diff)
{
	if(init[index]!=0)
	{
		tree[index] = (high-low+1)*init[index];
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			init[2*index+1] = diff;
			init[2*index+2] = diff;
			lazyadd[2*index + 1] = 0;
			lazyadd[2*index + 2] = 0;
			lazymul[2*index + 1] = 1;
			lazymul[2*index + 2] = 1;
		}
		init[index] = 0;
	}
	if(lazymul[index]!=1||lazyadd[index]!=0)
	{
		if(lazymul[index]!=1)
		{
			tree[index] *= lazymul[index];
		}
		if(lazyadd[index]!=0)
		{
			tree[index] += (high-low+1)*lazyadd[index];
		}
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			lazyadd[2*index + 1] += lazyadd[index];
			lazyadd[2*index + 2] += lazyadd[index];
			lazymul[2*index + 1] *= lazymul[index];
			lazymul[2*index + 2] *= lazymul[index];
		}
		lazyadd[index] = 0;
		lazymul[index] = 1;
	}
	if(high<l||low>high||low>r)
	return;
	if(low>=l&&high<=r)
	{
		tree[index] *= diff;
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			lazyadd[2*index+1] *= diff;
			lazyadd[2*index+2] *= diff;
			lazymul[2*index+1] *= diff;
			lazymul[2*index+2] *= diff;
		}
		return;
	}
	int mid = low + (high-low)/2;
	LazyUpdateMul(low,mid,2*index + 1,l,r,diff);
	LazyUpdateMul(mid+1,high,2*index + 2,l,r,diff);
	tree[index] = Merge(tree[2*index + 1], tree[2*index + 2]);
}
void ReInitializer(int low,int high,int index,int l,int r,int diff)
{
	if(high<l||low>high||low>r)
	return;
	if(low>=l&&high<=r)
	{
		tree[index] = (high-low+1)*diff;
		tree[index] = tree[index]%M;
		if(high!=low)
		{
			init[2*index+1] = diff;
			init[2*index+2] = diff;
			lazyadd[2*index + 1] = 0;
			lazyadd[2*index + 2] = 0;
			lazymul[2*index + 1] = 1;
			lazymul[2*index + 2] = 1;
		}
		lazymul[index] = 1;lazyadd[index] = 0;
		return;
	}
	int mid = low + (high-low)/2;
	ReInitializer(low,mid,2*index + 1,l,r,diff);
	ReInitializer(mid+1,high,2*index + 2,l,r,diff);
	tree[index] = Merge(tree[2*index + 1] , tree[2*index + 2]);
}
long long Build(int low,int high,int index)
{
	if(high==low)
	{
		tree[index] = input[high];
		return tree[index];
	}
	int mid = low + (high-low)/2;
	tree[2*index + 1] = Build(low,mid,2*index + 1);
	tree[2*index + 2]= Build(mid+1,high,2*index + 2);
	tree[index] = Merge(tree[2*index + 1],tree[2*index + 2]);
	return tree[index];
}
int main()
{
	int n,q,i,j,x,y,t,v;
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++)scanf("%lld",&input[i]);
	Build(0,n-1,0);
	for(i=0;i<1000006;i++)
	lazymul[i] = 1;
	while(q--)
	{
		scanf("%d",&t);
		if(t==1)
		{
			scanf("%d %d %d",&x,&y,&v);
			LazyUpdateAdd(0,n-1,0,x-1,y-1,v);
		}
		else if(t==2)
		{
			scanf("%d %d %d",&x,&y,&v);
			LazyUpdateMul(0,n-1,0,x-1,y-1,v);
		}
		else if(t==3)
		{
			scanf("%d %d %d",&x,&y,&v);
			ReInitializer(0,n-1,0,x-1,y-1,v);
		}
		else
		{
			scanf("%d %d",&x,&y);
			printf("%lld\n",getSolLazy(0,n-1,0,x-1,y-1));
		}		
	}
	return 0;
}
