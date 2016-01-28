#include<stdio.h>
#include<algorithm>
int main()
{int t,n,i,j,r;long long c,p;
scanf("%d",&t);
while(t){scanf("%d",&n);c=0;

for(j=1;j<=n;j++){p=1;if(j>n/2){r=n-j;}else{r=j;}
for(i=1;i<=r;i++){p=((p)*((n-j+i)/(i)));}
c=(c%1000000007+p%1000000007)%1000000007;
}
printf("%lld\n",c);t--;
}}
