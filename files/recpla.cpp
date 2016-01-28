//subset
#include<stdio.h>
#include<algorithm>
#include<math.h>
long long int a[30];
long long int min(long long int a,long long int b){
return (a<b)?a:b;
}
int main()
{long long int t,po,k,i,j,ans,p;int n;
scanf("%lld",&t);
while(t){
    scanf("%d %lld",&n,&k);
    ans=1000000009;
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
po=pow(2,n)-1;
for(i=0;i<=po;i++){
        p=0;
    for(j=0;j<n;j++){
        if(1&(i>>j)){
            p+=a[j];
        }
    }
    if(k-p>=0){
        ans=min(k-p,ans);
    }
}
printf("%lld\n",ans);

t--;}}




