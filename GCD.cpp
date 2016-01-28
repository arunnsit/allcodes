#include<stdio.h>
int gcd(int x,int y)
{if (y==0){return x;}else return gcd(y,x%y);}
int gcdlarge(int a,char *b)
{
int val=0,i=0,y;
while((val<a)&&(a>0))
{
val= val*10 + *(b+i)-'0';i++;y=val%a;
}

while((*(b+i)!='\0')&&(a>0))
{
y=(y*10+*(b+i)-'0')%a;i++;
}
return gcd(a,y);
}

int main()
{
int t,a,x,i;
char b[358];
scanf("%d",&t);
for(i=0;i<t;i++)
{
scanf("%d %s",&a,&b);
x = gcdlarge(a,b);
printf("%d\n",x);
}
}
