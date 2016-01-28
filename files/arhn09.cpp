#include<stdio.h>
int a[1000002],b[1000002]={0},c[1000002]={0};
int main(){
    int n,i,q,l,r,sum=0;char d[10];
    scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++){scanf("%d",&a[i]);sum+=a[i];}b[0]=0;c[n+1]=0;
    for(i=1;i<=n;i++){
        b[i]=a[i]+b[i-1];
        c[n+1-i]=a[n+1-i]+c[n+2-i];
    }
    for(i=1;i<=q;i++){
        scanf("%s %d %d",&d,&l,&r);l--;
        printf("%d\n",sum-b[l]-c[r+1]);
    }
}
