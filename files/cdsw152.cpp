#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
            int n,i,j,mod=1000000007;long long int a=0,b[100005]={0};
    scanf("%d",&n);
    if(n==1)printf("%d",3);
    else if(n==2)printf("%d",9);
    else {
        a=26;
        b[1]=3;b[2]=9;b[3]=26;
for(i=4;i<=n;i++){
    a=(a*3)%mod;
    if(i%3==0){a=a-(n-i)*b[i-3];}
    b[i]=a;
}
printf("%lld\n",a);
    }

    }
}
