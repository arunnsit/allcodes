#include<stdio.h>
#include<algorithm>
#include<math.h>
#define pi 3.141592653589793238462643383279502884197169399375105820974944592307816406286
int main(){
    int t;long long int n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&n);
        if(n==0||n==1)printf("1\n");
        else{
        k= floor((log(2*pi*n)/2+n*(log(n)-1))/log(10))+1;
    printf("%lld\n",k);
    }}
}
