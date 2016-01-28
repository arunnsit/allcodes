#include<iostream>
#include<stdio.h>
using namespace std;
long long int a[1000009],xored[10000009]={0};
int main()
{
	long long int n;
	int i,j,k;
	scanf("%I64d",&n);
	for(i=1;i<=n;i++)scanf("%I64d",&a[i]);
	for(i=1;i<=n;i++)xored[i]=i^xored[i-1];
	long long int x=0,y,z;	
	for(i=1;i<=n;i++)
	{
	   y=(n-i+1)%i;
	   z=(n-i+1)/i;
	   if(z%2==0)
	   {
	   	x=x^xored[y-1];
	   }
	   else{
	   	x=x^xored[y-1]^xored[i-1];
	   }
	   if((n-i)%2!=0)x=x^i;
	   x=x^a[i];
	}
	//cout<<x<<endl;	
     printf("%I64d\n",x);
}