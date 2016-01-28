#include<algorithm>
#include<iostream>
#include<stdio.h>
using namespace std;

int gcd (int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}
int main()
{
	int a,b,c,d,i,j;
	cin>>i;
	for(j=1;j<=i;j++)
	{   int x,y;
		cin>>a>>b>>c;
		printf("Case %d: ",j);
if (c < a && c < b)
	printf ("NO\n");
else if (c == 0)
	printf ("YES\n");
else if (c == a || c == b)
	printf ("YES\n");
else if (c%gcd(a, b,x,y) != 0)
	printf ("NO\n");
else 
		printf("YES\n");
	}
}