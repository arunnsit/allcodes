//alphacoder
#include<stdio.h>
#include<algorithm>
int main(){
    int t,n,i;
    scanf("%d",&t);
    while(t){
        scanf("%d",&n);int a[100002]={0},k,ma=0;
        for(i=0;i<n;i++){scanf("%d",&k);a[k]++;if(a[k]>ma)ma=a[k];}
        printf("%d\n",n-ma);

        t--;
    }
}
