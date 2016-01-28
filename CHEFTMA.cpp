#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int a[100009],b[300000];
int main()
{
	int t;
	std::cout.sync_with_stdio(false);	
	cin>>t;
	while(t--)
	{
		int n,m,i,j,k,tmp;
        cin>>n>>k>>m;
		for(i=0;i<n;i++)
			cin>>a[i];
		for(i=0;i<n;i++)
		{
			cin>>tmp;
			a[i]-=tmp;
		}
		sort(a,a+n);
		for(i=0;i<m+k;i++)
			cin>>b[i];
		sort(b,b+m+k);
		int sol=0,x=m+k-1,y=n-1;

		while(x>=0&&y>=0)
		{
			if(b[x]<=a[y])
			{   
				sol+=a[y]-b[x];
				x--;
				y--;
			}
			else
			{
				x--;
			}
		}
		if(y!=-1)
		{
			while(y!=-1)
			{
				sol+=a[y];
				y--;
			}
		}
		cout<<sol<<endl;

	}

}