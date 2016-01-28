#include<stdio.h>
#include<algorithm>
#include<string.h>
struct str{
    char a[30];
}b[10005];
bool cmp(struct str a,struct str b){
    int p,q,i;
    p=strlen(a.a);
    q=strlen(b.a);
    for(i=0;a.a[i]!='\0'&&b.a[i]!='\0';i++){
        if(a.a[i]>b.a[i])return a.a[i]<b.a[i];
        if(a.a[i]<b.a[i])return a.a[i]<b.a[i];
    }
    return p==i?1:0;
}
int check(struct str a,struct str b){
    int i,k;
    k=strlen(a.a);
    for(i=0;a.a[i]!='\0';i++){
        if(a.a[i]!=b.a[i])break;
    }
    if(i==k)return 1;
    else return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,i,p=0,l=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)scanf("%s",&b[i].a);

        std::sort(b,b+n,cmp);
        for(i=0;i<n-1;i++){
            l=check(b[i],b[i+1])==0?0:1;
            p=p>l?p:l;
           // printf("%s\n",b[i].a);
        }
        if(!p)printf("YES\n");
        else printf("NO\n");
    }
}
