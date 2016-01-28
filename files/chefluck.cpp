#include<stdio.h>
int main()
{int t,a,p,n;
scanf("%d",&t);
while(t)
{scanf("%d",&n);
a=n%7;p=n;
if(a==0){}
else{while(p>=0){p-=4;if(p%7==0){break;}}}
if(p<0){printf("-1\n");}
else{printf("%d\n",p);}
t--;
}

}
