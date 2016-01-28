#include<stdio.h>
int max(int a,int b){
    return (a>b)?a:b;
}
int main()
{int t,e,f,n,k,j,i,s,y,g;char u;
scanf("%d %d",&k,&n);
while(k&&n){int  a[600][3]={0},b[103][600]={0},c[600][3]={0};s=0;
for(i=1;i<=n;i++){scanf("%d %d",&a[i][0],&a[i][1]);c[i][0]=a[i][0];c[i][1]=a[i][1];}
for(i=1;i<=n;i++)
for(j=0;j<=k;j++){if(j-a[i][0]>=0)b[i][j]=max(b[i-1][j],b[i-1][j-a[i][0]]+a[i][1]);else b[i][j]=b[i-1][j];}y=k;
int val=b[n][k],x,mi;
for(i=k;i;i--)if(b[n][i]<val)break;

printf("%d %d\n",i+1,b[n][k]);
u=getchar();
scanf("%d %d",&k,&n);
}}
