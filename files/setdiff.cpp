#include<stdio.h>
#include<algorithm>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,i,j,x,a[100009]={0},po[100009]={0},mod=1000000007,sol=0;
        scanf("%lld",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        std::sort(a,a+n);
        po[0]=1;
        x=1;
        for(i=0;i<n;i++){po[i]=(x%mod-1%mod)%mod;x=((x%mod)*2)%mod;}
        x=2;
        for(i=n-2;i>=0;i--){
            po[i]=(po[i]%mod-x%mod+1)%mod;
            x=((x%mod)*2)%mod;
        }
        //for(i=0;i<n;i++)printf("%d \n",po[i]);
        for(i=0;i<n;i++){sol=(sol%mod+((po[i]%mod)*a[i]))%mod;}
        printf("%lld\n",sol);
    }
}
