#include<stdio.h>
#include<math.h>
int main()
{double t,a,i,j,x,y,l;
scanf("%lf",&t);
while(t)
{scanf("%lf %lf",&x,&y);l=2;i=1;
while(1){if(l>y){break;}else{l=l*2;i++;}}
a=((2*(y-pow(2,i-1))+1)*x)/pow(2,i);
printf("%0.9lf\n",a);


t--;
}}

