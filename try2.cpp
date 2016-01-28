#include<stdio.h>
#include<algorithm>
struct node{
    long long int a;
    long long int b;
}in[100007];
bool cmp(node a,node b){
    if(a.a!=b.a)return a.a<b.a;
    else return a.b<=b.b;
}
int main(){
    long long int n,i,c=1;
    node prev;
    scanf("%lld",&n);
    for(i=0;i<n;i++)scanf("%lld %lld",&in[i].a,&in[i].b);
    std::sort(in,in+n,cmp);
    prev.a=in[0].a;
    prev.b=in[0].b;
    for(i=1;i<n;i++){
       if(in[i].a!=prev.a){
        if(in[i].b<=prev.b){}
            else c++;
        prev.a=in[i].a;
            prev.b=in[i].b;
       }
    }
    printf("%lld\n",c);

}
