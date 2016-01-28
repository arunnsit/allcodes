#include<stdio.h>
long long int a[10000000]={0};
int main()
{unsigned long long int t,b,h;a[1]=1;unsigned long long int p=0,m=0,k=0,o=0,j=0;o=1;
for(b=2;b<=1000004;b++){if(b>2){p=(b*b-b-2)/2;}else{p=0;}
if(b>3){if(b%2==0){j=((b-2)*(b-2))/4;}else{j=((b-3)*(b-1))/4;}}else{j=0;}
o+=2*b+p+j;a[b]=o;}
scanf("%llu",&t);
while(t)
{scanf("%llu",&h);
printf("%llu\n",a[h]);t--;
}
return 0;
}
