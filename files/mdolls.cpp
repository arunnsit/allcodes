#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
struct node{
	int x,y;
};
node aps[100009];
using namespace std;
int a[100009],n,len[100009],r[100009],mark[100009];
int binary(int low,int high,int val)
{   //cout<<"L:"<<low<<" h:"<<high<<" v:"<<val<<endl;
	int mid=(low+high)/2;
	if(low>=high)
	{
		return high;
	}
	if(a[len[mid]]>val)
	{
		return binary(low,mid,val);
	}
	else if(val>a[len[mid]])
	{
		return binary(mid+1,high,val);
	}
	else
	{
		return mid;
	}
}
int lis()
{   
	memset(r,-1,sizeof(r));
	int maxl=1;
	len[0]=0;
	for(int i=1;i<n;i++)
	{
		if(a[i]<a[len[0]])
		{
			len[0]=i;
			r[i]=-1;
		}
		else if(a[i]>a[len[maxl-1]])
		{
			len[maxl]=i;
			r[i]=len[maxl-1];
			maxl++;
		}
		else
		{
			int x=binary(0,maxl-1,a[i]);
			len[x]=i;
			r[i]=len[x-1];
			//cout<<"bin:"<<x<<" for:"<<a[i]<<endl;
		}
	}
	return maxl;
}
bool cmp(node a,node b)
{   if(a.x==b.x)return a.y<b.y;
	return a.x<b.x;
}
int main()
{
	int i,j,k,l,t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		memset(len,0,sizeof(len));
		memset(aps,0,sizeof(aps));
		memset(mark,0,sizeof(mark));
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>aps[i].x>>aps[i].y;
	}
	sort(aps,aps+n,cmp);
	for(i=0;i<n;i++)a[i]=aps[i].y;
	lis();
    int y=0;
    for(i=n-1;i>=0;i--)cout<<r[i]<<" ";
    cout<<endl;
    for(i=n-1;i>=0;i--)
    {
    	if(!mark[i])
    	{   
    		y++;
    		int x=r[i]; 
    		while(x!=-1)
    		{   mark[x]++;
    			cout<<"x:"<<x<<endl;
    			x=r[x];

    		}
    	}
    }
    cout<<"output:"<<y<<endl;	
}
}