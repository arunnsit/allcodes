#include<stdio.h>
#include<algorithm>
int main()
{int t,e,f,n,k,j,i,s,g,c,p;
scanf("%d",&t);while(t)
{int s=0;int  a[21][10000]={0},b[21][10000]={0};

scanf("%d %d",&n,&k);
for(i=1;i<=n;i++){scanf("%d",&a[i][0]);a[i][1]=a[i][0];}
for(i=1;i<=n;i++)
for(j=0;j<=k;j++){if(j-a[i][0]>=0)b[i][j]=std::max(b[i-1][j],b[i-1][j-a[i][0]]+a[i][1]);else b[i][j]=b[i-1][j];}
if(b[n][k]==k){printf("YES\n");}
else printf("NO\n");
t--;
}
}
