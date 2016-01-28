//use sort so that we can get the 3rd nd 4th expensive as free :)
#include<stdio.h>
#include<algorithm>
int main(){
    int t,n,i,ans,m;
    scanf("%d",&t);
    while(t){ans=0;m=0;int a[1002];
            scanf("%d",&n);
            for(i=0;i<n;i++)scanf("%d",&a[i]);
            std::sort(a,a+n);
            for(i=n-1;i>=0;i--){
                 if(m==0){ans+=a[i];}
                 if(m==1){ans+=a[i];}
                 if(m==3){m=0;}
                else m++;
            }
            printf("%d\n",ans);
    t--;}
}
