#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
long long int a[1000009]={0},b[1000009]={0},f[1000009]={0};
int main()
{
	long long int sol=1,i,j,k,l,n,c=0,d=0,fc=0;
   cin>>n;
   
   for(i=1;i*i<n;i++)
   {
   	if(n%i==0)
   	{
   		a[c++]=i;
   		b[d++]=n/i;
   	}
   }
   if(i*i==n)a[c++]=i;
   for(i=0;i<c;i++)f[fc++]=a[i];
   for(i=d-1;i>=0;i--)f[fc++]=b[i];
   for(i=0;i<fc;i++)
   {
   	int u=0;
   	for(j=2;j*j<=f[i];j++)
   	{
   		if(f[i]%(j*j)==0){
   			u=1;
   			break;
   		}
   	}
   	if(u!=1)sol=max(sol,f[i]);
   }
   cout<<sol<<endl;	
   
}