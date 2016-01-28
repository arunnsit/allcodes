#include<stdio.h>
int main()
{int t,n,i,h;long long int a;scanf("%d",&t);
while(t)
{scanf("%d",&n);a=0;for(i=n;i>0;i--){scanf("%d",&h);a+=i-1;}
printf("%lld\n",a);t--;

}

}
