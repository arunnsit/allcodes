#include<stdio.h>
int main()
{int n, a[1000],i,j,temp;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);}
for(i=0;i<n;i++)
for(j=1;j<n-i;j++)
{if(a[j]<a[j-1]){temp=a[j-1];a[j-1]=a[j];a[j]=temp;}}
for(i=0;i<n;i++)printf("%d\n",a[i]);


}
