#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
    long long int w=0;
    int pos=0;
};
node in[1000008];
int cmp(node a,node b){
    return a.w>b.w;
}
int main(){
    int n,m,a,b,c,i;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){in[i].pos=i;}
    while(m--){
        scanf("%d %d %d",&a,&b,&c);
        in[a].w+=c;
        in[b].w+=c;
    }
    sort(in,in+n,cmp);
    int j=n-1,p=0;i=0;
    while(p<n/2){
        printf("%d ",i);p++;
        if(p<n/2)printf("%d ",j);
        i++;j--;p++;
    }

    printf("\n");
}
