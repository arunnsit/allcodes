//alphacoder
#include<stdio.h>
#include<algorithm>
int main(){
    int t,n,i,a[100005],c;
    scanf("%d",&t);
    while(t){
        scanf("%d",&n);c=0;
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    std::sort(a,a+n);
    for(i=1;i<n;i++){if(a[i]!=a[i-1])c++;}
    printf("%d\n",c+1);
    t--;}
}
