#include<stdio.h>
int main()
{int t,i,n,a[100000],temp;
scanf("%d",&t);
while(t)
{scanf("%d",&n);scanf("%d",&a[0]);
for(i=1;i<n;i++){scanf("%d",&a[i]);
if((i-1)%2==0&&a[i-1]>a[i]){temp=a[i-1];a[i-1]=a[i];a[i]=temp;}
else if((i-1)%2!=0&&a[i-1]<a[i]){temp=a[i-1];a[i-1]=a[i];a[i]=temp;}
}
for(i=0;i<n;i++){printf("%d ",a[i]);}printf("\n");

t--;}

}
