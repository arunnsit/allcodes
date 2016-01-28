#include<stdio.h>
int main()
{int t,a=0,b=1,c=0,temp;
scanf("%d",&t);printf("0 1");
while(c<=t){c=a+b;a=b;b=c;printf(" %d",c);}

}
