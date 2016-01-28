#include<stdio.h>
int main(void)
{
int i,j,k, a,b,c,n,count=0,t;
scanf("%d",&t);
while(t!=0)
{
scanf("%d %d %d %d",&n,&a,&b,&c);
for(i=0;i<=a;i++)
for(j=0;j<=b;j++)
for(k=0;k<=c&&k<=n-i-j;k++)
{if(i+j+k<=n)
count++;
else break;}
printf("%d\n",count);
t--;
count=0;
}

return 0;
}
