#include<stdio.h>
int m[1000009]={0};
int main()
{int i,c,check;long long int a,b,sum,p;
scanf("%lld",&a);check=5;b=a;sum=0;p=0;
while(sum!=1)
{sum=0;while(a){c=a%10;a=a/10;sum+=c*c;}a=sum;p++;
if(m[sum]>0&&sum<1000000){check=1;break;}
else{if(sum<1000000)m[sum]++;}
}
if(check==1){printf("-1\n");}
else{printf("%lld\n",p);}
}
