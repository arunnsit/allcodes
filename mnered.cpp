#include<stdio.h>
int main()
{int i,j,x,y,p,r,c,N,M,a[105][105],sum[105][105],ans=0,temp;
 scanf("%d%d",&N,&M);
 for(i=0;i<=N;i++)
 for(j=0;j<=N;j++)
 a[i][j]=0;
 for(i=0;i<M;i++)
 { scanf("%d%d",&r,&c);
   a[r][c]=1;
 }
 for(i=0;i<=N;i++)
 {sum[0][i]=0;
  sum[i][0]=0;
 }
 for(i=1;i<=N;i++)
 {for(j=1;j<=N;j++)
   {sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+a[i][j];
   }
 }
 ans=0;
 for(p=1;p*p<=M;p++)
 {
   if(M%p==0)
   {x=p;
 y=M/p;
 for(i=1;x+i-1<=N;i++)
 {for(j=1;y+j-1<=N;j++)
     {temp=sum[i+x-1][j+y-1]-sum[i-1][j+y-1]-sum[i+x-1][j-1]+sum[i-1][j-1];
   if(temp>ans)
   {ans=temp;
   }
     }
 }
 if(x!=y)
 for(i=1;y+i-1<=N;i++)
 {for(j=1;x+j-1<=N;j++)
     {temp=sum[i+y-1][j+x-1]-sum[i-1][j+x-1]-sum[i+y-1][j-1]+sum[i-1][j-1];
   if(temp>ans)
   {ans=temp;
   }
     }
 }
   }
 }
 printf("%d\n",M-ans);
return 0;
}
