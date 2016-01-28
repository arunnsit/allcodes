#include<stdio.h>
#include<algorithm>
#include<math.h>
int main()
{int t,i,n,x,ans;
scanf("%d",&t);
while(t)
{scanf("%d",&n);ans=n;
for(i=sqrt(n);i>=1;i--){if(n%i==0){x=n/i;
    ans=std::min(ans,x-i);}
}
printf("%d\n",ans);

t--;}

}
