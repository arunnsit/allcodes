#include<stdio.h>
#include<math.h>
int main(){
    long long int t,n,i,j,up,x,y;
    scanf("%lld",&t);
    while(t--){
            scanf("%lld",&n);j=0;
            y=n/2;
    for(i=0;i*i<=y;i++){
        x=sqrt(n-i*i);
        if(x*x+i*i==n){j=1;break;}
    }
    if(j)printf("Yes\n");
    else printf("No\n");

}    }
