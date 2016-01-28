#include<stdio.h>
long long int max(long long int a,long long int b){
    if(a>b)return a;
    else return b;
}
long long int  a[9999990]={0};
long long int p;
long long int coin(long long int n){
    if(n<12)return n;
    if(n<=9999980)if(a[n]!=0)return a[n];
    { p=max(n,coin(n/2)+coin(n/3)+coin(n/4));
    if(n<9999980){a[n]=p;}
    return p;}
}
int main(){
    long long int t,n=2;
    while(scanf("%lld",&n)!=EOF){
    printf("%lld\n",coin(n));
}return 0;}
