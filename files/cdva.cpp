//alpha coder
#include<stdio.h>
int main(){
    int t,i,j,k,ma,n,f;
    scanf("%d",&t);
    while(t){long long int fac=1;ma=0;
            scanf("%d %d",&n,&f);
    for(i=0;i<f;i++){
        scanf("%d",&k);
        if(ma<k)ma=k;
    }
    for(i=n;i>1;i--){
        fac=((fac%ma)*(i%ma))%ma;
    }
    printf("%lld\n",fac);



    t--;}
}
