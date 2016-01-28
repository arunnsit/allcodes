#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,z,i,j,k,ma;long long int a[10009];
        scanf("%d %d",&n,&z);ma=0,k=0;
        for(i=0;i<n;i++)scanf("%lld",&a[i]);
        for(i=0;i<z;i++)ma=ma^a[i];
        k=ma;j=i+1;
        for(i=z;i<n;i++){k=k^a[i];k=k^a[i-z];if(k<=ma){ma=k;j=i-z+2;}}
        printf("%d\n",j);
    }
}
