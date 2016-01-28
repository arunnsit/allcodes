#include<stdio.h>
int main(){
    int t,n,i,te,ans;
    scanf("%d",&t);
    while(t){ans=0;
            scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&te);ans=ans>te+i?ans:te+i;}
printf("%d\n",ans);
    t--;}
}
