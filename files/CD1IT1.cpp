//alpha coder
#include<stdio.h>
#include<algorithm>
int main(){
    int n,i,a[100005];
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    std::sort(a+1,a+n+1);
    printf("%d\n",a[(n+1)/2]);
}
