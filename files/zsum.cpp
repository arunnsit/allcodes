#include<stdio.h>
#include<algorithm>
long long int modcalc(long long int a,long long int b,long long int mod){
	long long int x=1,y=a;
    while(b>0){
    	if(b%2==1){
    		x=(x*y)%mod;
    	}
    	y=(y*y)%mod;
    	b/=2;
    }
    return x%mod;
}

int main(){
	long long int n,k,mod=10000007;
	scanf("%lld %lld",&n,&k);
	while(n||k){
		long long int s=0;
        s=(modcalc(n,k,mod)+modcalc(n,n,mod)+2*modcalc(n-1,k,mod)+2*modcalc(n-1,n-1,mod))%mod;
        printf("%lld\n",s);
        scanf("%lld %lld",&n,&k);
	}
}