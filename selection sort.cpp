#include<iostream>
using namespace std;
int a[10000001];
int main()
{
	int i,j,n,smallest,temp;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n-1;j++)
	{
		smallest=j;
		for(i=j+1;i<n;i++)
	   { if(a[i]<a[smallest])
		 {smallest =i;}
    	}
	temp=a[j];
	a[j]=a[smallest];
	a[smallest]=temp;
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}
