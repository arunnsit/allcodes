#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long long int calc(long long int a)
{
if(a==0)
return 1;
long long int nike=0;
while(a!=0)
{nike++;a/=10;}return nike;}
int main()
{long long int r=1,a,b,x,y,lol=0;	scanf("%lld %lld",&a,&b);
while(a&&b){x=a;y=b;r++;lol++;

long long int tmp,counter[1000],i=0;
while(b!=0)
{
counter[i++]=a/b;
tmp=a;
a=b;
b=tmp%b;
}
counter[i-1]--;
counter[i++]=1;
long long int n=i,j;
long long int adidas[n],bhai[n];
adidas[n-1]=1;
for(i=n-2;i>=0;i--)
adidas[i]=adidas[i+1]+3+calc(counter[i]);
for(i=0;i<n;i++)
bhai[i]=adidas[i]/2;
long long int r=n+n-1,c=adidas[0],nike,nike1=1;
char dedia[r][c];
for(i=0;i<r;i++)
for(j=0;j<c;j++)
dedia[i][j]='.';
nike=1;
long long int nike2=0;
long long int p;
char ch;
for(i=0;i<r-1;i=i+2)
dedia[i][c-bhai[nike++]-1]='1';
for(i=1;i<r;i=i+2)
{
j=c-1;
nike=adidas[nike1++];
while(nike--)
dedia[i][j--]='-';
dedia[i][j-1]='+';
j=j-3;
long long int temp=counter[nike2++];
while(temp!=0)
{
p=temp%10;
if(p>=0&&p<10)ch=p+48;
dedia[i][j--]=ch;
temp/=10;}}dedia[r-1][c-1]='1';printf("Case %lld:\n%lld / %lld\n",lol,x,y);
for(i=0;i<r;i++)
{for(j=0;j<c;j++)
printf("%c",dedia[i][j]);
printf("\n");
	}
scanf("%lld %lld",&a,&b);
	}
	return 0;
}
