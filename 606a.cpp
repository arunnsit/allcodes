#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int a,b,c,x,y,z,c1=0,c2=0,c3=0;
	cin>>a>>b>>c>>x>>y>>z;
	int extra=0;
	if(a>x)
	{
		extra+=(a-x)/2;
		a=x;
	}
	if(b>y)
	{
		extra+=(b-y)/2;
		b=y;
	}
	if(c>z)
	{
		extra+=(c-z)/2;
		c=z;
	}
	if(a<x)
	{
		extra-=(x-a);
		a=x;
	}
	if(b<y)
	{
		extra-=(y-b);
		b=y;
	}
	if(c<z)
	{
		extra-=(z-c);
		c=z;
	}
	if(x<=a&&y<=b&&z<=c&&extra>=0)
	{
		cout<<"Yes\n";
	}
	else cout<<"No\n";



}
