#include<stdio.h>
int main(){
    int t,b;
    long long int a,k,c;
    scanf("%d",&t);
    while(t){b=0;
            scanf("%lld %lld",&a,&k);
            if(k==1){printf("%d\n",a);}
       else
    {while(a>0){
        b+=a%k;
        a=a/k;
    }printf("%d\n",b);}

    t--;}

}
