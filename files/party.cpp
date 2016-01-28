#include<stdio.h>
#include<algorithm>
int main()
{int t,e,f,n,k,j,i,s,y,g;char u;
scanf("%d %d",&k,&n);
while(k&&n){int  a[600][3]={0},b[103][600]={0},c[600][3]={0};s=0;
for(i=1;i<=n;i++){scanf("%d %d",&a[i][0],&a[i][1]);c[i][0]=a[i][0];c[i][1]=a[i][1];}
for(i=1;i<=n;i++)
for(j=0;j<=k;j++){if(j-a[i][0]>=0)b[i][j]=std::max(b[i-1][j],b[i-1][j-a[i][0]]+a[i][1]);else b[i][j]=b[i-1][j];}y=k;
int val=9999999,x,mi;
for(i=n;i>=1;i--){
    if(b[i][y]==b[i-1][y-a[i][0]]+a[i][1]&&b[i][y]!=b[i-1][y]){for(j=1;j<=n;j++){if(c[j][1]==a[i][1]){if(val>c[j][0]){val=c[j][0];x=j;}}}
    s+=val;
    y-=a[i][0];c[x][0]=0;c[x][1]=0;val=9999999;
}}
printf("%d %d\n",s,b[n][k]);
getchar(u);
scanf("%d %d",&k,&n);
}}
