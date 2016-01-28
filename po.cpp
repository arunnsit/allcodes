#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<unordered_map>
using namespace std;
struct node{
    char a[100];
};
node a[2000004];
bool cmp(node c,node b){
    int l=strlen(c.a),y=strlen(b.a),i,l2;
    l2=std::min(l,y);
    for(i=0;i<l2;i++){if(c.a[i]<b.a[i])return c.a<b.a;if(c.a[i]>b.a[i])return b.a<c.a;}
    if(l>y)return c.a>b.a;
    return c.a<b.a;
}
int main(){
int n,i,q,x;char p[100];
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%s",&a[i].a);
sort(a,a+n,cmp);
unordered_map<string,int>map1;
for(i=0;i<n;i++){map1[a[i].a]=i;}
scanf("%d",&q);
for(i=0;i<q;i++){
    scanf("%s",&p);
    if(map1[p]==0)printf("-1\n");
    else{
        x=map1[p];
        if(!strcmp(a[x-1].a,p))printf("-1\n");
        else printf("%s\n",a[x-1].a);
    }
}}



