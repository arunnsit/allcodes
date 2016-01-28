#include<stdio.h>
#include<math.h>

int main()
{int t,b,p;
float k,n;
scanf("%d",&t);
while(t){scanf("%f",&n);b=n;
k=(sqrt((8*n)-7)-1)/2;p=k;
if(k>p){printf("%d\n",p+1);}
else{printf("%0.f\n",k);}
t--; }

}
