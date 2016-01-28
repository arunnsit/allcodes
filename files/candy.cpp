#include<stdio.h>
int main(){int a,j[10005],m,n,co,t;float avg;
scanf("%d",&t);
while(t!=-1)
{co=0;m=0;
for(a=0;a<t;a++){scanf("%d",&j[a]);co+=j[a];}
 avg=(float)co/t;n=avg;
 if(avg>n){printf("-1\n");}
 else if(avg==n){for(a=0;a<t;a++){if(n<j[a]){m=m+j[a]-n;}}printf("%d\n",m);}
 scanf("%d",&t);
}
return 0;
}
