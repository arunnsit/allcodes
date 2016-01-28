#include<stdio.h>
int main(){
    int t,n,a[100],i;
    scanf("%d",&t);
    while(t--){

        int sol=10,sum=0,b[100]={0},j;
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]>n-1)sol=0;
            sum+=a[i];
    }
    int k=1,li=0,lj=0;
    if(sum!=n)sol=0;
    if(sol==0)printf("-1\n");
    else{int x=0;
        for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(a[i]!=0&&i!=j&&b[j]==0&&a[j]!=0){
                b[j]=i+1;
                x++;
                a[i]--;
            }
        }}
        if(x<n){
            for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                    if(a[i]!=0&&i!=j&&b[j]==0){
                        b[j]=i+1;
                        x++;
                        a[i]--;
                    }
        }}}
        for(i=0;i<n;i++){printf("%d ",b[i]);}printf("\n");

    }

}}
