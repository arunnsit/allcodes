#include<stdio.h>
int main(){
    long long int  t,n,k,a[100009],i,to;long long int m;
    scanf("%lld",&t);
    while(t){m=0;
            scanf("%lld %lld",&n,&k);
            for(i=0;i<n;i++){
                scanf("%lld",&a[i]);
            }
            for(i=0;i<n;i++){
                scanf("%lld",&to);
                if(m<(k/a[i])*to){m=to*(k/a[i]);}
            }
printf("%lld\n",m);
    t--;}
}
