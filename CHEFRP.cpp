#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,temp,n2,sol=0,k=11002300;
        scanf("%d",&n);
        n2=n;
        long long int a=0;
        while(n--){
                scanf("%d",&temp);
                if(temp<2)sol=-1;
                a+=temp;
                if(k>temp)k=temp;
        }
        if(sol==-1)printf("-1\n");
        else printf("%lld\n",a-k+2);
    }
}
