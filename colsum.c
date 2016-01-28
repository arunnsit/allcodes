#include<stdio.h>
int main()
{int m,n,i,j,a[100][100],col=0,row=0,colma=0,rowma=0;scanf("%d %d",&m,&n);
for(i=0;i<=m;i++)
for(j=0;j<=n;j++)scanf("%d",&a[i][j]);
for(i=0;i<=m;i++)
{for(j=0;j<=n;j++){col+=a[i][j];}if(col>colma){colma=col;}col=0;}printf("max sum of row : %d\n",colma);col=0;colma=0;
for(j=0;j<=n;j++)
{for(i=0;i<=m;i++)
{col+=a[i][j];}if(col>colma){colma=col;}col=0;}printf("max sum of roe : %d\n",colma);


}
