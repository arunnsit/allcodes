#include<stdio.h>
#include<algorithm>
int main(){
    int t,n,i,j,a[1002];int h;
    scanf("%d",&t);
    while(t){
            scanf("%d",&n);h=0;
            for(i=0;i<n;i++)scanf("%d",&a[i]);
            h=a[1]-a[0];
            for(i=0;i<n;i++)
            for(j=i+1;j<n;j++){
                h=std::max(a[j]-a[i],h);
            }
            printf("%d\n",h);

    t--;}
}
