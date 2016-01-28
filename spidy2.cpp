#include<stdio.h>
#include<algorithm>
int main(){
int i ,j,t,k,a[200002],n,b[200002];
scanf("%d",&n);
for(i=1;i<=n;i++){scanf("%d",&a[i]);
b[i]=1000000002;}b[1]=0;
for(i=1;i<=n;i++)
{for(j=i+1,k=1;j<=n;j=k+i){
k*=2;
b[j]=std::min(b[j],b[i]+abs(a[i]-a[j]));
}}printf("%d\n",b[n]);}
