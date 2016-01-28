#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
using namespace std;
char b[1500009];

struct node {
    int end;
    int length;
    node *a[26];
};
struct trie{
  node *start;
};
void nullify(node *b){
    b->end=0;
    b->length=0;
    for(int i=0;i<26;i++){
        b->a[i]=NULL;
    }
}

void insert(node *ch){
int l;
l=strlen(b);
for(int i=0;i<l;i++){
    if(ch->a[b[i]-97]==NULL){
        node *temp=new node;
        nullify(temp);
        ch->a[b[i]-97]=temp;
    }
    ch=ch->a[b[i]-97];
    ch->end=1;ch->length=l;
}}
int search(node *ch){
    int l,i;
l=strlen(b);
for( i=0;i<l;i++){
    if(ch->a[b[i]-97]!=NULL){
        ch=ch->a[b[i]-97];
    }
    else break;
}
if(i==l||ch->end==1){ch->end=ch->end-1;
        return 1;}
else return 0;
}
double fac[1500009]={0};
int main(){
trie *p=new trie;
node *y=new node;
int a,n,i,m;long long int ans=0;
for(i=1;i<1500003;i++){
    fac[i]=fac[i-1]+(double)log10l((double)i)/log10l(10.0);
}
p->start=y;
nullify(p->start);
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",&b);
insert(p->start);}
scanf("%d",&m);
for(i=0;i<m;i++){
scanf("%s",&b);
a=search(p->start);
if(a){printf("yp");
    ans=ans*10+(fac[strlen(b)]+1);
}
}
printf("%lld\n",ans);
}
