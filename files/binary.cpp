#include<stdio.h>
int main()
{ long long int n,bin=0,x=1,z=1,y=0,l=0,i=1;
scanf("%lld",&n);
while (n){z=1;y=1;x=0;i=1;
	while (y<=n)
	{y=y*2;x++;}
       if(y>1) {y=y/2;x--;}
	l=y;
	while (i<=x)
	{ z= z*10;i++;}
	bin = bin + z;
	      n=n-l; }
	printf("%lld",bin);
	return 0;}
