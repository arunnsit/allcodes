#include<stdio.h>
#include<algorithm>
int main()
{long long int n,m,a;
scanf("%I64d  %I64d  %I64d",&n,&m,&a);
n=(n%a==0)?n/a:n/a+1;m=(m%a==0)?m/a:m/a+1;
printf("%I64d\n",n*m);

}
