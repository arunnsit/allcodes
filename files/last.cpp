#include<stdio.h>
int main()
{    double a,b,ini,temp;int o[100],d,p,t,c;
scanf("%d",&t);
while(t--)
{    scanf("%lld %lld",&a,&b);if(b==0){printf("1\n");}
 else{ini=a%10;o[0]=ini;c=0,p=0;temp=ini;
 while(1){temp=(temp*a)%10;if(temp==ini){p=1;break;}else{c++;o[c]=temp;}}c++;
 {d=(b-1)%c;}
 printf("%d\n",o[d]);
}
}
}
