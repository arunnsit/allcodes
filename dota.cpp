#include<stdio.h>
#include<algorithm>
int main(){
    int t,n,i,m,d,a[600],ma,mi=0,c;
    scanf("%d",&t);
    while(t--){
       scanf("%d %d %d",&n,&m,&d); ma=0;mi=0;c=1;
       for(i=0;i<n;i++)scanf("%d",&a[i]);
       for(i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(ma<=a[j]){
                ma=a[j];
                mi=j;
            }
        }a[mi]-=d;
        if(a[mi]<=0){c=0;break;}
        ma=0;
       }
       if(c==0)printf("NO\n");
       else printf("YES\n");

    }
}
