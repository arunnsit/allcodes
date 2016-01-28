#include<stdio.h>
long long int gcd(long long int a,long long int b){
    if(b==0)return a;
    else return gcd(b,a%b);
}
int a[1000005][2]={0};
int main(){
    int t,i;int c,b,e,n,m;

    scanf("%d",&t);
    while(t){
            scanf("%d %d",&n,&m);
                a[1][0]=1;a[1][1]=1;
for(i=2;i<=n;i++){
            a[i][0]=(a[i-1][0]%m+a[i-1][1]%m)%m;
            a[i][1]=((a[i][0])%m+(a[i-1][1])%m)%m;
    }
    printf("%d/%d\n",a[n][0]%m,a[n][1]%m);
    t--;}




}
