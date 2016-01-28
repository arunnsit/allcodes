#include<stdio.h>
#include<algorithm>
struct node{
    int l;
    int r;
};
bool cmp(node a,node b){
    if(a.l==b.l)return a.r<b.r;
    return a.l<b.l;
}
node a[10000];
int main(){
    int n,i,j,p,q,days=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d %d",&a[i].l,&a[i].r);
    std::sort(a,a+n,cmp);
    for(i=0;i<n;i++){
        if(a[i].r>=days){days=a[i].r;}
        else days=a[i].l;
    }
    printf("%d\n",days);
}
