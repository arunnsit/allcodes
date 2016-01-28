#include<iostream>
#include<algorithm>
using namespace std;
int arr[1000009]={0};
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else return gcd(b,a%b);
}
int tree[1000009];
int make_tree(int curr,int x,int y)
{
	if(x==y)
	{
		tree[curr]=arr[x];
		return tree[curr];
	}
	int mid=x+(y-x)/2;
	return tree[curr]=gcd(make_tree(2*curr+1,x,mid),make_tree(2*curr+2,mid+1,y));
}
int query(int curr,int x,int y,int l,int h)
{
	if(l<=x&&y<=h)
		return tree[curr];
	int mid=x+(y-x)/2;
	int a,b,c1=0,c2=0;
	if((l<=x&&x<=h)||(l<=mid&&mid<=h))
		a=query(2*curr+1,x,mid,l,h),c1=1;
	if((l<=mid+1&&mid+1<=h)||(l<=y&&y<=h))
		b=query(2*curr+2,mid+1,y,l,h),c2=1;
	if(c1&&c2)
		return gcd(a,b);
	if(c1)
		return a;
		return b;
}
int main()
{
	int n,m,p;
	cin>>n>>p;
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int x=0,y=0,currsol=arr[0],msol=0,maxlen=0;
	make_tree(0,0,n-1);
	while(y!=n)
	{
		if(currsol>=p)
		{
			maxlen=max(y-x+1,maxlen);
			y+=1;
			currsol=query(0,0,n-1,x,y);
		}
		else
		{   
			x+=1;
			if(x!=y)
			currsol=query(0,0,n-1,x,y);
		    else
		    {
		    	x++;
		    	y++;
		    	currsol=query(0,0,n-1,x,y);
		    }
		}
	}
	cout<<maxlen<<endl;
}