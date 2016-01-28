#include<stdio.h>

int main()
{int t,n,k,i,j,curr,curc,ma,yt;
scanf("%d",&t);
while(t)
{scanf("%d %d",&n,&k);curr=0;int a[1050]={0};
for(i=0;i<n;i++){scanf("%d",&yt);a[yt]++;for(j=0;j<1030;j++){if(a[j]>0){a[j^yt]++;}}}ma=-1;a[0]++;
for(i=0;i<1030;i++){if(a[i]>0){curr=i^k;if(ma<curr){ma=curr;}}}
printf("%d\n",ma);
t--;}
}
