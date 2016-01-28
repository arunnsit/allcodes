#include<stdio.h>
#include<math.h>
int main()
{double t,a,b,c,d;double p,s;scanf("%lf",&t);
while(t){scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
s=(double)(a+b+c+d)/2;
p=sqrt((s-a)*(s-b)*(s-c)*(s-d));
printf("%lf\n",p);t--;}

}
