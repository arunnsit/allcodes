#include<stdio.h>
int main()
{int t;
scanf("%d",&t);
while(t){int n,x,mi=101,temp,sum=0;
scanf("%d %d",&n,&x);
while(n){scanf("%d",&temp);if(temp<mi){mi=temp;}sum+=temp;n--;}
if(sum/x==(sum-mi)/x){printf("-1\n");}
else{printf("%d\n",sum/x);}
t--;}
}



