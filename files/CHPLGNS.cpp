//alpha coder it is :p
#include<stdio.h>
#include<algorithm>
struct node{
    int i;
    int pos;
};
bool cmp(node a,node b){
    return a.pos<b.pos;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,i,j,mi[100003]={0},x,y;
        node ma[100003];
        scanf("%d",&n);
        for(i=0;i<n;i++){
            scanf("%d",&m);
            int u=-10000000;
            for(j=0;j<m;j++){
                scanf("%d %d",&x,&y);
                u=u>x?u:x;
            }
            ma[i].i=i;
            ma[i].pos=u;
        }
        std::sort(ma,ma+n,cmp);
        for(i=0;i<n;i++){
            mi[ma[i].i]=i;
        }
        for(i=0;i<n;i++)printf("%d ",mi[i]);
        printf("\n");
    }
}
