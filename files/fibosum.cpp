#include<stdio.h>
long long int y[10000000]={0},mod=1000000007,c=0;
long long int fibo(int n){
    c++;
    if(n==0)return 0;
    if(n==1)return 1;
    if(n==2)return 1;
    if(n<10000000&&y[n]!=0)return y[n];
    else {
        if(n%2==0){
            return y[n<10000000?n:0]=((fibo(n/2)%mod)*((fibo(n/2 +1)%mod)+(fibo(n/2-1))%mod)%mod)%mod;

        }
        else
        {
            return y[n<10000000?n:0]=((fibo(n/2+1)%mod)*(fibo(n/2+1)%mod))%mod+((fibo(n/2)%mod)*(fibo(n/2)%mod))%mod;
        }
    }
}
int main(){
    long long int l,r;int t,n,m;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&n,&m);
    l=fibo(n+1)-1;
    r=fibo(m+2)-1;
    r=(r-l)%mod;
    if(r<0)r=1000000007+r;
    printf("%lld\n",r);
}}
