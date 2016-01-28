#include<stdio.h>
#include<algorithm>
#include<limits.h>
#define o INT_MIN
int p[1000][1000]={0};
int main()
{int t,i,j,m,n,a,b,ma;
scanf("%d",&t);
while(t){
        scanf("%d",&n);
for(i=0;i<=n;i++){
        p[i][0]=o;p
        [0][i]=o;}

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)
        scanf("%d",&p[i][j]);
}
p[0][1]=0;p[1][0]=0;
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        p[i][j]+=std::max(p[i-1][j],p[i][j-1]);

    }}
    float ans=0,k=2*n-3;ans=p[n][n];ans=(float)ans/k;
    if(ans>=0)
     printf("%0.6f\n",ans);
else printf("No funds\n");


t--;}

}
