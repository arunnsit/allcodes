#include<stdio.h>
int main()
{int t;long long int a,b;
scanf("%d",&t);
while(t){scanf("%lld %lld",&a,&b);
if(b==0){printf("0 %lld\n",a);}
else{printf("%lld %lld\n",a/b,a%b);}

t--;}

}
