#include<stdio.h>
#include<algorithm>
long long int a[100009];
int main(){
    int n,k,i,c=0,st=0,e=1;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    std::sort(a,a+n);
    while(st!=n-1&&e!=n){
        if(a[e]-a[st]<k)e++;
        if(a[e]-a[st]>k)st++;
        if(a[e]-a[st]==k){
            c++;
            st++;
        }
    }
    printf("%d\n",c);
}
