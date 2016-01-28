#include<stdio.h>
long long int gcd(long long int a,long long int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int a,b,x;
        scanf("%lld %lld",&a,&b);
        while(b!=1){
            x=gcd(a,b);
            if(x==1)break;
            else b=b/x;
        }
        if(b==1)printf("Yes\n");
        else printf("No\n");
    }
}
