#include<stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int b[5][2000003]={0};
int main()
{int k,n,i,j,a[600][2];
scanf("%d %d",&k,&n);
for(i=1;i<=n;i++){scanf("%d %d",&a[i][1],&a[i][0]);}
for(i=1;i<=n;i++)
for(j=0;j<=k;j++){if(j-a[i][0]>=0)b[i%2][j]=max(b[(i-1)%2][j],b[(i-1)%2][j-a[i][0]]+a[i][1]);else b[i%2][j]=b[(i-1)%2][j];}
printf("%d\n",b[n%2][k]);return 0;}
