#include<stdio.h>
#include<algorithm>
#include<math.h>
int main(){
    long long int t,n,k,i,ans,mod=1000000007;
    scanf("%lld",&t);
    while(t){ans=1;
            scanf("%lld %lld",&n,&k);
    for(i=n;i>n-k;i--){ans=(ans*i)%mod;}
        printf("%lld\n",ans);
    t--;}
}
