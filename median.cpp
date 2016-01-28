#include<iostream>
using namespace std;
int main()
{
	int a1[100];a2[100],n,m,i=0,j=0;
	cout<<"enter no. of values in first array";
	cin>>n;
	cout<<"enter values";
	for(i=0;i<n;i++)
	{
		cin>>a1[i];
	}
	cout<<"enter no. of values in second array";
	cin>>m;
	cout<<"enter values";
	for(i=0;i<m;i++)
	{
		cin>>a2[i];
	}
	i=0;j=0;
	if((m+n)%2!=0)
    {
		while(i+j<=(n+m)/2)
	{
		if(a1[i]<a2[j])
		i++;
		else
		j++;
	}
	if(a1[i]<a2[j])
	cout<<"median: "<<a[i];
	else
	cout<<"median: "<<a[j];
	}
	
}
