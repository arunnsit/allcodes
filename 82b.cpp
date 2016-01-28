#include<iostream>
using namespace std;
int a[201*201][201];
int main()
{
	int n,i,j,k,l,m,x;
	cin>>n;
	for(i=0;i<(n-1)*n;i++)
	{
		cin>>x;
		for(j=0;j<x;j++)cin>>a[i][j];
	}


}