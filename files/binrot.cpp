#include<stdio.h>
int main()
{int n,i,a,b,temp,y;
scanf("%d %d",&a,&n);y=a;
temp=(~0)>>n;printf("%d\n",temp);
temp=~(temp<<n);printf("%d\n",temp);
temp=y&temp;printf("%d\n",temp);
y=y>>n;printf("%d\n",y);
temp=temp<<(32-n);printf("%d\n",temp);
y=y|temp;
printf("%d",y);}
