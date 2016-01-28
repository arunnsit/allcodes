#include<stdio.h>
int main()
{int t,n,i,j,a[200010];long long co;
scanf("%d",&t);
while(t)
{scanf("%d",&n);co=0;
for(i=0;i<n;i++){scanf("%d",&a[i]);}
printf("\n");
for(i=0;i<n;i++)
for(j=i+1;j<n;j++){if(a[i]>a[j]){co++;}}
printf("%lld\n",co);printf("\n");
   t--;}}
