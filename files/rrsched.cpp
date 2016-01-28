#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
#define N 500008
struct node{
	int val,pos;
	long long int sol;
};
int bit[N]={0},n,temp[N]={0};
node arr[N];
bool cmp(node a,node b)
{
	if(a.val==b.val)
	{
		return a.pos<b.pos;
	}
	else return a.val<b.val;
}
void update(int pos,int add)
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
bool cmp2(node a,node b)
{
	return a.pos<b.pos;
}
int main()
{
	int i,j,k,l,mam=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i].val);
    	arr[i].pos=i;
    }
    long long int uptil=0,per=0;
    sort(arr,arr+n,cmp);
    i=0;
    while(i<n)
    {   
    	 
    	uptil+=(arr[i].val-1-per)*(n-i);
    	x=n-i; 
    	  while(arr[i].val==arr[i+1].val&&(i+1)<n)
    	{arr[i].sol=uptil+arr[i].pos+1-query(arr[i].pos);temp[mam++]=arr[i].pos;
    		i++;}
         arr[i].sol=uptil+arr[i].pos+1-query(arr[i].pos);temp[mam++]=arr[i].pos;
          //cout<<"i:"<<i<<" uptil:"<<uptil<<" q:"<<query(arr[i].pos)<<" with:"<<arr[i].val<<endl;
         uptil+=x;
         per=arr[i].val;
    	for(j=0;j<mam;j++)update(temp[j],1);
    		mam=0;
    	i++;
    }
    sort(arr,arr+n,cmp2);
    for(i=0;i<n;i++)printf("%lld\n",arr[i].sol);
}