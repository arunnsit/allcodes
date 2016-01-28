
#include<stdio.h>
int main()
{long long n;int t;
scanf("%lld",&t);
while(t){
scanf("%lld",&n);
printf("%lld\n",(n*(n+1)/2)+n);
t--;
}
}
