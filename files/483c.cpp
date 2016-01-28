#include<iostream>
using namespace std;
int a[100009],b[100009]={0};
int main()
{
	int n,k;
	cin>>n>>k;
	int s=0,c=1,l=1,kc=k,curr=1;
	for(int i=1;i<=n;i++)
	a[i]=i;
	for(int i=1;i<=n;i+=2)
	if(kc>1){
		b[i]=curr;
		b[i+1]=curr+kc;
		a[curr]=0;
		a[curr+kc]=0;
		curr++;
		kc-=2;
	}
	while(b[c]!=0)
	{
		cout<<b[c]<<" ";
		c++;
	}
	for(int i=1;i<=n;i++)
	if(a[i])
	cout<<a[i]<<" ";
	cout<<endl;	

    

}