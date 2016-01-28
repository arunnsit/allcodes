#include<stdio.h>
#include<algorithm>
int main(){
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
        long long int  n,a[100002],i,dp[100002]={0};
        scanf("%lld",&n);
        for(i=0;i<n;i++)scanf("%lld",&a[i]);
        for(i=2;i<=n+1;i++){
            dp[i]=std::max(dp[i-2]+a[i-2],dp[i-1]);
        }
        printf("Case %d: %lld\n",k,dp[n+1]);
    }
}
