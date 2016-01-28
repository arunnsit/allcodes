//alpha coder : trying to do it in the merge way
#include<stdio.h>
#include<algorithm>
int main(){
    int t,a[1003],b[1003],n,m,i,mi,j;
    scanf("%d",&t);
    while(t--){int x=-1,y=-1;mi=99999999;
        scanf("%d",&n);
        for(i=0;i<n;i++)scanf("%d",&a[i]);
        scanf("%d",&m);
        for(i=0;i<m;i++)scanf("%d",&b[i]);
        std::sort(a,a+n);
        std::sort(b,b+m);
        i=0;j=0;
        for(i=0;i<n;i++)
        for(j=0;j<m;j++){
            if(mi>abs(a[i]-b[j])){mi=abs(a[i]-b[j]);}
        }
        printf("%d\n",mi);
    }
}
