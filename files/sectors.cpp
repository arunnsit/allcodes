#include<stdio.h>
int main()
{int t,i,n;long long int a,b,c;
scanf("%d",&t);
while(t)
{scanf("%d",&n);a=0;b=0;
for(i=0;i<n;i++)
{scanf("%lld",&c);if(i%2==0){b+=c;}else{a+=c;}
}
if(n%2==0){if(b==a){printf("YES\n");}else{printf("NO\n");}
}
else{printf("YES\n");}
    t--;
}}
