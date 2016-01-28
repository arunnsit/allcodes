//alpha coder it is :p
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,temp,temp2;
        long long int s=0;
        scanf("%d",&n);
        scanf("%d",&temp);
        s=temp;
        for(i=1;i<n;i++){
                scanf("%d",&temp2);
                if(temp2-temp>0){
                    s+=temp2-temp;
                }
                temp=temp2;
    }
    printf("%lld\n",s);
}
}
