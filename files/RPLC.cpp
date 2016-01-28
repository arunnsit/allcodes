#include<stdio.h>
long long int a[1000007];
int main(){
    int t;
    scanf("%d",&t);
    int i,n,j;
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(j=0;j<n;j++)scanf("%lld",&a[j]);
        long long int u=1,curr=0;
        for(j=0;j<n;j++){
            curr+=a[j];
            if(curr<0)u=u>(1-curr)?u:1-curr;
        }
        printf("Scenario #%d: %lld\n",i,u);
    }
}
