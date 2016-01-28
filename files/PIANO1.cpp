#include<stdio.h>
int main(){
    int t,n;char a[103];
    scanf("%d",&t);
    while(t--){
        scanf("%s",&a);
        scanf("%d",&n);
        int sum=0,i,te,sumi;
        te=12*n;
        long long int val=0;
        for(i=0;a[i]!='\0';i++)if(a[i]=='T')sum+=2;else sum+=1;
        sumi=sum;
        printf("%d\n",sum);
        while(sumi<=te){
            val+=te-sumi;
            sumi+=sum;
        }
        printf("%lld\n",val);
    }
}
