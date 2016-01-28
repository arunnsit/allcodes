#include<stdio.h>
#include<algorithm>
int main()
{int t,i,j,m,n,a,b,p[1000][1000],ma;
scanf("%d",&t);
while(t--){scanf("%d %d",&m,&n);ma=0;
for(i=0;i<m;i++)
{for(j=0;j<n;j++){scanf("%d",&p[i][j]);}}
for(i=m-2;i>=0;i--)
{for(j=0;j<n;j++){if(j-1<0)p[i+1][j-1]=0;
if(j+1==n)p[i+1][j+1]=0;
p[i][j]+=std::max(std::max(p[i+1][j],p[i+1][j+1]),p[i+1][j-1]);}}
for(j=0;j<n;j++){if(ma<p[0][j]){ma=p[0][j];}}printf("%d\n",ma);}}


