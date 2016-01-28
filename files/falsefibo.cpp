#include<stdio.h>
long long int a[100002]={0};
#define m 1000000007
long long int f(long long int n){
    if(a[n]!=0)return a[n];
    if(n==0){a[n]=2;return a[n];}
    if(n==1){a[n]=5;return a[n];}
    else{long long int p=((2%m*f(n-1)%m)%m+(3%m*f(n-2)%m)%m)%m;a[n]=p%m;return a[n]; }

}
int main(){
    int t;
    scanf("%d",&t);
    while(t){long long n;
    scanf("%lld",&n);
    printf("%lld\n",f(n));

    t--;}
}
