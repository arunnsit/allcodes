#include<stdio.h>
#include<math.h>
int main()
{int t,m,s,i,n,j,result;
scanf("%d",&t);
while(t)
{scanf("%d",&n);m=0;s=1;
int result = n;
for(int i=2;i*i <= n;i++) {
         if (n % i == 0) result -= result / i;
         while (n % i == 0) n /= i;
       }
       if (n > 1) result -= result / n;
printf("%d\n",result);
t--;

}}


