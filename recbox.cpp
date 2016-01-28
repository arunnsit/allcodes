#include<stdio.h>
#include<algorithm>
int main(){
int t,n,k,i,j,m,l,o,p,c1,c2,ans;
scanf("%d",&t);
    while(t){int m,a,c,s=0,b[1005];
            scanf("%d %d",&n,&m);ans=0;
    for(i=1;i<=n;i++){
       scanf("%d",&b[i]);
    }
    for(i=1;i<=m;i++){scanf("%d %d",&a,&c);ans+=std::min(b[a],b[c]);}



    printf("%d\n",ans);t--;


}    }


