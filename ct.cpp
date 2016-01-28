#include<stdio.h>
int main()
{int t,m,n,k,io,i,j,f[100][100]={0},ans[100][100]={0};long long s;
scanf("%d",&t);
while(t)
{scanf("%d %d",&m,&n);s=0;k=m-n;if(k<0){k=-k;io=n;n=m;m=n;}
for(i=1;i<100;i++)
for(j=1;j<100;j++)
{
        f[i][j] = f[i-1][j] + f[i][j-1] - f[i-1][j-1];
        if(i * 2 == j || j * 2 == i)
            f[i][j] += 2;
        else if(!(i * 2 < j || j * 2 < i))
            f[i][j] += 4;
        ans[i][j] = ans[i-1][j] + ans[i][j-1] - ans[i-1][j-1] + f[i][j];
    }printf("%lld\n",ans[m][n]);t--;

}

}
