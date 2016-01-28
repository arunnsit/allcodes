#include<stdio.h>
int main()
{long long int t,n,i,zero,sameneg,sum,neg,ma,sub;
scanf("%lld",&t);
while(t){scanf("%lld",&n);long long int a[50009];zero=0,sameneg=0,sum=0,ma=-1000000009;sub=1;
for(i=0;i<n;i++){scanf("%lld",&a[i]);if(a[i]>=0){sum+=a[i];}if(ma<a[i]){ma=a[i];}if(a[i]==0){zero++;}}
for(i=0;i<n;i++){if(ma==a[i]&&a[i]<0){sameneg++;}}
for(i=0;i<zero;i++){sub=((sub%1000000009)*2)%1000000009;}
if(ma==0){printf("%lld %lld\n",ma,sub-1);}
if(ma<0){printf("%lld %lld\n",ma,sameneg);}
if(ma>0){printf("%lld %lld\n",sum,sub);}
t--;

}}
