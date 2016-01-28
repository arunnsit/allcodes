#include<iostream>
#include<algorithm>
#include<string.h>

using namespace std;
int main()
{
	long long int x,y,n,i,j,k,o,ch=1;
	cin>>x>>y>>k;
	o=1;
	while(o<x&&o>0)
	{
		o*=k;
	}
	while(o>=x&&o<=y&&o>0)
	{   
		cout<<o<<" ";
		o*=k;
		ch=0;
	}
	if(ch)
		cout<<-1;
	cout<<endl;


}