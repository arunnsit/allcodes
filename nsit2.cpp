//alpha coder
#include<stdio.h>
long long int a[10002]={0};
int main(){
    int t,n,h,i,mod=1000000007;long long int ans;
    a[1]=1;a[2]=1;
    for(i=3;i<=10001;i++){
        a[i]=(a[i-1]%mod+a[i-2]%mod)%mod;
    }
    scanf("%d",&t);
    while(t){
            ans=1;
            scanf("%d %d",&n,&h);
    ans=(((ans*a[n+1])%mod*a[n]%mod)%mod*(h%mod))%mod;
    printf("%lld\n",ans);


    t--;}
}
