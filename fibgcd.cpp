#include<stdio.h>
int f[1000009]={0};
int gcd(int a , int b){
if(b==0)return a;
else return gcd(b,a%b);
}
int fib(int x){
    int g;
if(x==0){return 0;}
if(x==1){return 1;}
if(x<0){return 0;}
if(f[x]!=0)return f[x];
else {
g=(fib(x-1)%1000000007+fib(x-2)%1000000007)%1000000007;
f[x]=g%1000000007;
return g%1000000007;
}}
int main(){
    int t,a,b,x;
    scanf("%d",&t);
    while(t){
            scanf("%d %d",&a,&b);
        x=gcd(a,b);//printf(":ffd");
        printf("%d\n",fib(x));
    t--;}
}
