#include<stdio.h>
#include<math.h>
#include<iostream>
using namespace std;
int prime[10000009]={0},c[10000009]={0};
int main()
{
	int a=sqrt(10000009),i,j,k,l;
    
    for(i=2;i<=a;i++)
    	if(prime[i]==0)
    		for(j=i*i;j<10000009;j+=i)
    			prime[j]++;

   for(i=2;i<10000009;i++)
   if(!prime[i])c[i]=c[i-1]+1;
   else c[i]=c[i-1];
   scanf("%d",&k);
   while(k--)
   {
   	scanf("%d",&l);
   	printf("%d\n",c[l]-c[l/2]);
   } 		

}