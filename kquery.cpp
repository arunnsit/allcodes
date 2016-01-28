#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
#define N 30010
struct node_1
{
	int val,pos;
};
struct node_2
{
	int x,y,k,no,sol;
};
int bit[N]={0};
node_1 arr[N];
node_2 q[N*100];
void update(int pos,int add,int n)
{
	int ind=pos+1;
	while(ind<=n)
	{
		bit[ind]+=add;
			ind=ind+(ind&(-ind));
	}
}
int query(int pos)
{
	int ind=pos+1;
	int sum=0;
	while(ind!=0)
	{
		sum+=bit[ind];
		ind=ind-(ind&(-ind));
	}
	return sum;
}
bool cmp_node_1(node_1 a,node_1 b)
{   if(a.val==b.val)return a.pos>b.pos;
	return a.val>b.val;

}
bool cmp_node_2(node_2 a,node_2 b)
{   if(a.k==b.k)return a.y>b.y;
	return a.k>b.k;

}
bool cmp(node_2 a,node_2 b)
{
	return a.no<b.no;
}
int main()
{
	int i,j,k,l,x,y,n,cq;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i].val);
		arr[i].pos=i;
	}
	scanf("%d",&cq);
	for(i=0;i<cq;i++)
	   {
			scanf("%d %d %d",&q[i].x,&q[i].y,&q[i].k);
			q[i].x--;
			q[i].y--;
	       q[i].no=i;
	   }
	sort(arr,arr+n,cmp_node_1);
	sort(q,q+cq,cmp_node_2);
	int kp=0;
    for(i=0;i<cq;i++)
    {   
    	while(arr[kp].val>q[i].k&&kp<n)
    	{
    		update(arr[kp].pos,1,n);
    		//cout<<"insert:"<<arr[kp].val<<endl;
    		kp++;
    	}
    	
    	q[i].sol=(query(q[i].y)-query(q[i].x-1));
    }
    sort(q,q+cq,cmp);
    for(i=0;i<cq;i++)
    printf("%d\n",q[i].sol);
}