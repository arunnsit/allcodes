#include<stdio.h>
#include<functional>
#include<algorithm>
int a[10000000]={0};
int main()
{int b,n,i,j;
scanf("%d",&n);j=0;scanf("%d",&a[0]);b=a[0];
for(i=1;i<n;i++){scanf("%d",&a[i]);b=b^a[i];}
printf("%d\n",b);}
