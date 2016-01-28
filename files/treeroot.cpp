//author:arunnsit aka alphacoder
#include<stdio.h>
int main(){
    int t,n,i;long long int a,b,c,d;
    scanf("%d",&t);
    while(t){a=0;b=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%lld %lld",&c,&d);
        a+=c;
        b+=d;
    }
        printf("%lld\n",a-b);
    t--;}
}
