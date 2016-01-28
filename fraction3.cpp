#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
unsigned long long int o[10000000];
#include<string.h>
long long int dig(long long int a)
{
  if(a==0)
		return 1;
	long long int count=0;
	while(a!=0)
	{
		count++;
		a/=10;
	}
	return count;
}
int main()
{	long long int r=1,fu;unsigned long long int m,n,i,j,te;char ch,sin,y;
y=cin.get();cin.get();

while(y!='C'){if(y=='A'){long long int tmp,value[1000],a,b,i=0;
	scanf("%lld%lld",&a,&b);
	printf("Case %lld:\n",r);
	r++;
	while(b!=0)
	{
		value[i++]=a/b;
		tmp=a;
		a=b;
		b=tmp%b;
	}
	value[i-1]--;
	value[i++]=1;
	long long int n=i,j;
	long long int numerator[n],dot[n];
	numerator[n-1]=1;
	for(i=n-2;i>=0;i--)
		numerator[i]=numerator[i+1]+3+dig(value[i]);
	for(i=0;i<n;i++)
		dot[i]=numerator[i]/2;
	long long int r=n+n-1,c=numerator[0],count,count1=1;
	char ans[r][c];
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			ans[i][j]='.';
	count=1;
	long long int count2=0;
	long long int p;
	char ch;
	for(i=0;i<r-1;i=i+2)
		ans[i][c-dot[count++]-1]='1';
	for(i=1;i<r;i=i+2)
	{
		j=c-1;
		count=numerator[count1++];
		while(count--)
			ans[i][j--]='-';
		ans[i][j-1]='+';
		j=j-3;
		long long int temp=value[count2++];
		while(temp!=0)
		{
			p=temp%10;
			if(p==0)ch='0';
			if(p==1)ch='1';
			if(p==2)ch='2';
			if(p==3)ch='3';
			if(p==4)ch='4';
			if(p==5)ch='5';
			if(p==6)ch='6';
			if(p==7)ch='7';
			if(p==8)ch='8';
			if(p==9)ch='9';
			ans[i][j--]=ch;
			temp/=10;
		}
	}
	ans[r-1][c-1]='1';
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%c",ans[i][j]);
		printf("\n");
	}cin.get();}
if(y=='B')
{
ch='a';sin='6';fu=0;m=0;i=0;
while(ch!='\n'||fu!=1||sin!='1')
{te=0;ch='a';if(sin=='1'){fu++;}while(ch!='\n'){ch=cin.get();if(ch>=48&&ch<=57){te=te*10+ch-'0';}if(ch!='\n'){sin=ch;}}
o[i]=te;i++;m++;}
for(i=m-1;i>1;i-=2){o[i-1]*=o[i];o[i-2]+=o[i-1];if(i>=4){o[i-4]*=o[i];}}printf("Case %lld:\n",r);r++;
printf("%lld %lld\n",o[0],o[2]);
}
	y=cin.get();cin.get();
}}
