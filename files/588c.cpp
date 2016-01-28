#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int a[2000092]={0};
int main()
{
	int n,x,i,j,k,s=0,sol=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&x);
		s=max(s,x);
		a[x]++;
	}
	s+=40;
	for(i=0;i<s;i++){
		x=a[i];
		a[i]=0;
		for(j=0;j<32;j++)
		{   
			a[i+j]+=((x>>j)&1);
		}
	}
	for(i=0;i<=s;i++)if(a[i])sol++;
	printf("%d\n",sol);


}