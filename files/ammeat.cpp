#include<stdio.h>
#include<algorithm>
int main(){
int t,n,i;long long int a[10],m,coun;
scanf("%d",&t);
while(t){scanf("%d %lld",&n,&m);coun=0;
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    std::sort(a,a+n);
    for(i=n-1;i>=0;i--){if(m>0){m=m-a[i];coun++;}}
    if(m<=0)printf("%lld\n",coun);
    else printf("-1\n");
t--;}


}
