#include<stdio.h>
long long int a[300007]={0};
int main(){
    long long int m,n,i,temp,j=0,ma=0;
    scanf("%lld %lld",&n,&m);
    for(i=1;i<=n;i++){scanf("%lld",&temp);a[i]=a[i-1]+temp;}i=1;j=0;
    while(i<=n+1&&j<n){
        if(a[i]-a[j]<=m&&ma<=a[i]-a[j])ma=a[i]-a[j];
        if(a[i]-a[j]<=m)i++;
        else j++;
    }
    printf("%lld\n",ma);
}
