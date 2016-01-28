#include<iostream>
#include<stdio.h>
using namespace std;
int a[1000001];
int main()
{
	int i=0,j=0,s,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(j=0;j<n-1;j++)
	{
	for(i=1;i<n-j;i++)
	{
		if(a[i-1]>a[i])
		{
			s=a[i];
			a[i]=a[i-1];
			a[i-1]=s;
		}
	}}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
		printf("\n");
	}
	return 0;
	
}
