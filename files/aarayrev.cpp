#include<stdio.h>
int main()
{int n,i,a[1000]={0},b,temp;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);}temp=0;
for(i=0;i<n/2;i++){temp=a[i];a[i]=a[n-1-i];a[n-1-i]=temp;}
for(i=0;i<n;i++){printf("%d\n",a[i]);}
}
