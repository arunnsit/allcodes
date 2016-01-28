#include<stdio.h>
int main(){long long int a,temp,m,n,t;long long int avg,co;
scanf("%lld",&t);
while(t)
{co=0;
scanf("%lld",&m);
for(a=0;a<m;a++){scanf("%lld",&temp);co=co+(temp%m);}
 if(co%m==0){printf("YES\n");}
 else if(co%m!=0){printf("NO\n");}
t--;}
}
