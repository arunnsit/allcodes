#include<stdio.h>
#include<algorithm>
long long int min(long long int a,long long int b ){
    return (a>b)?b:a;
}
long long int max(long long int a,long long int b ){
    return (a<b)?b:a;
}
int main(){
    int t;long long int a[5],ans,N=1000000007,y,x,b,c;
    scanf("%d",&t);
    while(t){ans=1;
        scanf("%lld %lld %lld",&a[0],&a[1],&a[2]);
        y=a[0]+a[1]+a[2];
        x=min(min(a[0],a[1]),a[2]);
        b=max(max(a[0],a[1]),a[2]);
        c=y-x-b;
        ans= ((((x%N)*((c-1)%N))%N)*((b-2)%N))%N;
        printf("%lld\n",ans);
    t--;}

}
