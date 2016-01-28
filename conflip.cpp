#include<stdio.h>
int main()
{int t , g;
scanf("%d",&t);
while(t){scanf("%d",&g);
while(g){int i ,n, q;
scanf("%d %d %d",&i,&n,&q);
if(n%2==0){printf("%d\n",n/2);}
else{if(i!=q){printf("%d\n",(n/2)+1);}else{printf("%d\n",n/2);}}
g--;
}
t--;
}}
