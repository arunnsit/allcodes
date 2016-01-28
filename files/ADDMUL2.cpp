#include<bits/stdc++.h>
#define M 1000000007
using namespace std;
struct node{
	long long sum,ladd,lmul;
};
long long input[100005];node tree[1000006];
void PushDown(int index,int high,int low)
{
	tree[index].sum = (tree[index].sum*tree[index].lmul + tree[index].ladd*(high-low+1))%M;
	tree[2*index+1].lmul = (tree[index].lmul*tree[2*index+1].lmul)%M;
	tree[2*index+2].lmul = (tree[index].lmul*tree[2*index+2].lmul)%M;
	tree[2*index+1].ladd = (tree[index].lmul*tree[2*index+1].ladd + tree[index].ladd)%M;
	tree[2*index+2].ladd = (tree[index].lmul*tree[2*index+2].ladd + tree[index].ladd)%M;
	tree[index].ladd = 0;
	tree[index].lmul = 1;
}
long long getSolLazy(int low,int high,int index,int l,int r)
{
	PushDown(index,high,low);
	if(high<l||high<low||low>r)
	return 0;
	if(low>=l&&high<=r)
	return tree[index].sum;
	int mid = low + (high-low)/2;
	return (getSolLazy(low,mid,2*index + 1,l,r) + getSolLazy(mid+1,high,2*index + 2,l,r))%M;
}
void LazyUpdateAdd(int low,int high,int index,int l,int r,int v)
{
	PushDown(index,high,low);
	if(high<l||low>r||low>high)
	return;
	if(low>=l&&high<=r)
	{
		tree[index].sum += (high-low+1)*v;
		if(high!=low)
		{
			tree[2*index+1].ladd = (tree[2*index+1].ladd + v)%M; 
			tree[2*index+2].ladd = (tree[2*index+2].ladd + v)%M;
		}
			printf("left:%d right:%d sum:%lld\n",low,high,tree[index].sum);

		return;
	}
	int mid = low + (high-low)/2;
	LazyUpdateAdd(low,mid,2*index+1,l,r,v);
	LazyUpdateAdd(mid+1,high,2*index+2,l,r,v);
	tree[index].sum = (tree[2*index+1].sum + tree[2*index+2].sum)%M;
		printf("left:%d right:%d sum:%lld\n",low,high,tree[index].sum);

}
void LazyUpdateMul(int low,int high,int index,int l,int r,int v)
{
	PushDown(index,high,low);
	if(high<l||low>high||low>r)
	return;
	if(low>=l&&high<=r)
	{
		tree[index].sum = (tree[index].sum*v)%M;
		if(high!=low)
		{
			tree[2*index+1].ladd = (tree[2*index+1].ladd*v)%M;
			tree[2*index+2].ladd = (tree[2*index+2].ladd*v)%M;
			tree[2*index+1].lmul = (tree[2*index+1].lmul*v)%M;
			tree[2*index+2].lmul = (tree[2*index+2].lmul*v)%M;
		}
				printf("left:%d right:%d sum:%lld\n",low,high,tree[index].sum);

		return;
	}
	int mid = low + (high-low)/2;
	LazyUpdateMul(low,mid,2*index + 1,l,r,v);
	LazyUpdateMul(mid+1,high,2*index + 2,l,r,v);
	tree[index].sum = (tree[2*index + 1].sum + tree[2*index + 2].sum)%M;
			printf("left:%d right:%d sum:%lld\n",low,high,tree[index].sum);

}
void ReInitializer(int low,int high,int index,int l,int r,int v)
{
	PushDown(index,high,low);
	if(high<l||low>high||low>r)
	return;
	if(low>=l&&high<=r)
	{
		tree[index].sum = ((high-low+1)*v)%M;
		if(high!=low)
		{
			tree[2*index + 1].ladd = v;
			tree[2*index + 2].ladd = v;
			tree[2*index + 1].lmul = 0;
			tree[2*index + 2].lmul = 0;
		}
		tree[index].ladd = 0;tree[index].lmul = 1;
		return;
	}
	int mid = low + (high-low)/2;
	ReInitializer(low,mid,2*index + 1,l,r,v);
	ReInitializer(mid+1,high,2*index + 2,l,r,v);
	tree[index].sum = (tree[2*index + 1].sum + tree[2*index + 2].sum)%M;
}
node Build(int low,int high,int index)
{
	if(low==high)
	{
		tree[index].sum = input[high]%M;
		return tree[index];
	}
	int mid = low + (high-low)/2;
	tree[2*index + 1] = Build(low,mid,2*index+1);
	tree[2*index + 2] = Build(mid+1,high,2*index+2);
	tree[index].sum = (tree[2*index + 1].sum + tree[2*index + 2].sum)%M;
	return tree[index];	
}
main()
{
	int n,q,i,j,x,y,t,v;
	scanf("%d %d",&n,&q);
	for(i=0;i<n;i++)scanf("%lld",&input[i]);
	for(i=0;i<1000006;i++)
	{
		tree[i].ladd = 0;
		tree[i].lmul = 1;
		tree[i].sum = 0;
	}
	Build(0,n-1,0);
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
}
