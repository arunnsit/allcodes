#include<stdio.h>
#include<algorithm>
int main()
{int t,n,i,a[60000],m,x,y;int b[60000][2]={0};int curr,sum,end;
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
scanf("%d",&m);
while(m)
{curr=0;sum=0;scanf("%d %d",&x,&y);
for(i=x-1;i<=y-1;i++)
{if(b[i][0]!=0&&b[y-1][1]>=y-1){curr=curr+b[i][0];if(curr<0){curr=0;}if(sum<curr){sum=curr;}i=b[y-1][1];}
curr=curr+a[i];if(curr<0){curr=0;}
if(sum<curr){sum=curr;}
}b[x-1][0]=sum;b[x-1][1]=y-1;
printf("%d\n",sum);

m--;}


}
