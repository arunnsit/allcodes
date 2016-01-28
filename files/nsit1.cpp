#include<stdio.h>
#include<math.h>
#include<algorithm>
int main(){
     long long int i,b,c,t,n,f,l,u,o;float a ;
    scanf("%lld",&t);
    while(t){
            scanf("%lld %lld",&n,&f);
if(f==1||f==0)printf("%lld\n",f);
else{b=1;
    while(b<n){
        b*=f;
    }
    if(b-n<=n-b/f)printf("%lld\n",b);
    else printf("%lld\n",b/f);



}

    t--;}
    return 0;
}
