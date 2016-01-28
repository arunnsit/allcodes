#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int x,w;
	
};
node a[3000000];
bool cmp(node a,node b)
{
	return a.w<b.w;
}
int main()
{
	int n,i,j,tmp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i].x;
		cin>>a[i].w;
		tmp=a[i].x;
		a[i].x=a[i].x-a[i].w;
		a[i].w=tmp+a[i].w;
	}
	sort(a,a+n,cmp);
	int sol=1,last=0;
	for(i=1;i<n;i++)
		if(a[last].w<=a[i].xo)
			sol++,last=i;
	cout<<sol<<endl;	

}