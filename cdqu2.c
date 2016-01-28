#include<math.h>
int main(){
    long long int i;int t;
    scanf("%d",&t);
while(t--){
        scanf("%lld",&i);
i=sqrt(i);
printf("%lld\n",(i*(i+1)*(2*i+1))/6);
}
return 0;
}
