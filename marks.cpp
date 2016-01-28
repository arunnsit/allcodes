#include<stdio.h>
int a[101][6][3]={0};
int main(){int n,m,coun[6]={0},p,ka[10]={0},cas=0,b,c,d,temp,ma[6]={0},t1,t2;
char sub,h='A';
scanf("%d",&n);
while(n>0){scanf(" %c %d",&sub,&temp);t1=sub-h;
{m=temp;a[m][t1][0]=m;a[m][t1][1]++;coun[t1]++;if(ma[t1]<m){ma[t1]=m;}
n--;
}}
while(cas<5){ka[cas]=0;
for(b=0;b<=ma[cas];b++){if(a[b][cas][1]>0){if(((coun[cas]/a[b][cas][1])<10)&&((coun[cas]/a[b][cas][1])>0)){printf("%d ",a[b][cas][0]);ka[cas]++;}}}
if(ka[cas]==0){printf("Nothing Unusual");}
printf("\n");
cas++;
}
}

