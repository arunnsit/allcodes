#include<stdio.h>
#include<string.h>
int main()
{int t;char a[1000000],x[5],y;int b,c,d,l,i;long long m,n,p;
scanf("%d",&t);
while(t){scanf("%lld",&n);scanf("%s",&y);
while(y!='='){scanf("%lld",&m);
if(y=='+'){n+=m;}
if(y=='-'){n-=m;}
if(y=='/'){n/=m;}
if(y=='*'){n*=m;}
scanf("%s",&y);
}
printf("%lld\n",n);

t--;}
}
