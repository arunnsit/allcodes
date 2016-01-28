#include<stdio.h>
#include<algorithm>

int main(){
    long long int a[4],ans=0,i,j,k,w;
    scanf("%I64d %I64d %I64d",&a[0],&a[1],&a[2]);
    std::sort(a,a+3);
    k=a[1]-a[0];
    w=a[2]-a[0];
    if(a[2]>=2*(a[1]+a[0]))printf("%I64d\n",a[1]+a[0]);
    else printf("%I64d\n",(a[1]+a[0]+a[2])/3);

}
