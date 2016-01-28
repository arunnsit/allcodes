#include<iostream>
#include<stdio.h>
#include<algorithm>
struct node{int x,y;};
using namespace std;
bool cmp(node a,node b)
{   if(a.x==b.x)return a.y<b.y;
	return a.x<b.x;
}
void update(int bit[1005],int pos,int n,int add)
{
	int ind=pos+1;
	while(ind<=n+1)
	{
		bit[ind]+=add;
			ind=ind+(ind&(-ind));
	}	
}
int query(int bit[1005],int pos)
{
	int ind=pos+1;
	int sum=0;
	while(ind!=0)
	{
		sum+=bit[ind];
		ind&=ind-1;
	}
	return sum;
}
node ed[1000005];
int main()
{
	int t,u;
	scanf("%d",&t);
	for(u=1;u<=t;u++)
	{
		int n,m,k,i,j,l;
		scanf("%d %d %d",&n,&m,&k);
		for(i=0;i<k;i++)scanf("%d %d",&ed[i].x,&ed[i].y);
		sort(ed,ed+k,cmp);
		int bit[1005]={0};
		long long int sol=0;
		for(i=0;i<k;i++)
		{  
			sol+=abs(query(bit,m)-query(bit,ed[i].y));
			update(bit,ed[i].y,m,1);
		}
		printf("Test case %d: %lld\n",u,sol);
	}
}