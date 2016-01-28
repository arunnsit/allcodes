#include<stdio.h>
#include<string.h>
#include<algorithm>
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
long long int t,x,i,j,l;long long int a,d,c,o,p;
char b[358];
scanf("%lld %s",&a,&b);
while(a&&b[0]!='0'){d=0;
x = gcdlarge(a,b);
l=strlen(b);
for(i=0;i<l;i++){d=d*10+b[i]-'0';}o=std::max(a,d);p=std::min(a,d);
if(a==d){printf("1\n");}
else if(o%p==0){printf("%lld\n",o/p);}
else{c=a*d/x;
printf("%lld\n",c);}scanf("%lld %s",&a,&b);
}
}
