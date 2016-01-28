//alpha coder ! segment trees !
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
#include<math.h>
struct node{
    public:
     long long int  sum=0;
     long long int  lazy=0;
};

node tree[10000000];
 long long int  a[10000000]={0};

node mergenode(node left,node right){
        node a;
        a.sum=left.sum+right.sum;
        return a;
    }
    node null( long long int  sum1){
         node temp;
        temp.sum=sum1;
        return temp;
    }

node constructor( long long int  arr[], long long int  low, long long int  high, long long int  curr){
    if(low==high){
        tree[curr].sum=arr[low];
        return tree[curr];
    }
     long long int  mid=low+(high-low)/2;
    tree[curr]=mergenode(constructor(arr,low,mid,2*curr+1),constructor(arr,mid+1,high,2*curr+2));
    //pr long long int f("low: %d high :%d\n sum :%d\n prefix :%d\n suffix :%d\n sol :%d\n",low,high,tree[curr].sum,tree[curr].prefix,tree[curr].suffix,tree[curr].sol);
    //r long long int f("\n\n");
    return tree[curr];
}
node solution( long long int  curr, long long int  left, long long int  right, long long int  low, long long int  high){
    //pr long long int f("low:%d high:%d add:%d\n",low,high,add);
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
        if(tree[curr].lazy){
        if(low!=high){
            tree[2*curr+1].lazy+=tree[curr].lazy;
            tree[2*curr+2].lazy+=tree[curr].lazy;
        }

        tree[curr].sum+=tree[curr].lazy*(high-low+1);
        tree[curr].lazy=0;}
        if(left<=low&&right>=high){return tree[curr];}
       // pr long long int f("low:%d high:%d sum:%d\n",low,high,b.sum);
     long long int  mid=low+(high-low)/2;
    node result=mergenode(solution(2*curr+1,left,right,low,mid),solution(2*curr+2,left,right,mid+1,high));
    return result;
}
 long long int  lazyupdate( long long int  curr, long long int  left, long long int  right, long long int  low, long long int  high, long long int  add){
    if(left<=low&&right>=high){
        if(low!=high){
            tree[2*curr+1].lazy+=add;
            tree[2*curr+2].lazy+=add;
           // pr long long int f("yoyo\n");
        }
        tree[curr].sum+=add*(high-low+1);
      // printf("low:%lld high:%lld curr:%lld\n",low,high,tree[curr].sum);
        return 0;
    }

    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp.sum;}
    long long int  mid=low+(high-low)/2;
    lazyupdate(2*curr+1,left,right,low,mid,add);
    lazyupdate(2*curr+2,left,right,mid+1,high,add);
    long long int  x=(left>low)?left:low;
    long long int  y=(right>high)?high:right;
        tree[curr].sum+=add*(y-x+1);

}

void createtree( long long int  arr[], long long int  n)
{
 constructor(arr,0,n-1,0);
}
 int  main(){
     long long int  n=8,l,r,add,m,i,t,o;node b;
    scanf("%lld",&t);
    while(t--){
    scanf("%lld",&n);
    o=4*log2(n);
    o=n*o;
   for(i=0;i<=o;i++){tree[i].sum=0;tree[i].lazy=0;}
    createtree(a,n);
    scanf("%lld",&m);
    while(m--){
             long long int  type,p,q,v;
    scanf("%lld",&type);
    if(type==0){
        scanf("%lld %lld %lld",&p,&q,&v);
        p--;q--;
        lazyupdate(0,p,q,0,n-1,v);
       // pr long long int f("sucess\n");
    }
    if(type==1){
    scanf("%lld %lld",&p,&q);
    p--;q--;
    b=solution(0,p,q,0,n-1);
    printf("%lld\n",b.sum);
}
}
}
}
