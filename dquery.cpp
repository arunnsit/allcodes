#include<stdio.h>
#include<algorithm>
#include<math.h>
struct node{int l;
            int r;
            int i;
};
int n;
bool cmp(node a,node b){
    int p=sqrt(n);
    if(a.l/p!=b.l/p){return a.l<b.l;}
    else return a.r<b.r;
}
node a[200005];
int in[ 200000];
int answ[ 200000];
int cnt[10000000]={0},ans=0;
void add(int a){
    cnt[in[a]]++;
    if(cnt[in[a]]==1)ans++;
}
void remove(int a){
    cnt[in[a]]--;
    if(cnt[in[a]]==0)ans--;
}
int main(){
    int i,q,cl=0,cr=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&in[i]);
    scanf("%d",&q);
    for(i=0;i<q;i++){scanf("%d %d",&a[i].l,&a[i].r);a[i].l--;a[i].r--;a[i].i=i;}
    std::sort(a,a+q,cmp);
    for(i=0;i<q;i++){
        int l=a[i].l,r=a[i].r;
        while(cl<l){remove(cl);cl++;}
        while(cl>l){add(cl-1);cl--;}
        while(cr<=r){add(cr);cr++;}
        while(cr>r+1){remove(cr-1);cr--;}
        answ[a[i].i]=ans;
    }
    for(i=0;i<q;i++)printf("%d\n",answ[i]);
}
