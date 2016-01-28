#include<iostream>
#include<algorithm>
using namespace std;
struct node{
	int val;
	int pos;
};
node a[300000];
int b[300000],c[300000];
bool cmp(node a,node b)
{
	return a.val<b.val;
}
int main()
{
	int i,j,k,l,m,n;
	cin>>n>>m;
	for (int i = 0; i < n; ++i)
	{cin>>b[i];
		/* code */
	}
	for (int i = 0; i < m; ++i)
	{cin>>a[i].val;
		a[i].pos=i;
		/* code */
	}
	sort(b,b+n);
	sort(a,a+m,cmp);
	int x=0;i=0;
	while(x<n&&i<m)
	{
		if(a[i].val<b[x]){
			c[a[i].pos]=x;
			i++;
	}
	else{
		x++;
	}
	}
	while(i<m){
		c[a[i++].pos]=x;
	}
for(i=0;i<m;i++)cout<<c[i]<<" ";
}