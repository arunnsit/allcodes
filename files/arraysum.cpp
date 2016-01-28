#include<stdio.h>
int main()
{int n,i,j,temp,y,k,a[1000]={0},b[100];
scanf("%d %d",&n,&y);k=0;temp=1;
for(i=0;i<n;i++)
{scanf("%d",&b[i]);a[k]=b[i];k++;
for(j=1;j<=temp;j++)
{a[k]=a[j]+b[i];k++;}temp=k-1;
}temp=0;
for(i=0;i<k;i++){if(a[i]==y){temp++;}}
printf("%d",temp);}
