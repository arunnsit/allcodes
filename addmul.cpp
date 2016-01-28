#include<stdio.h>
#include<algorithm>

struct node{
    long long int sum;
    long long int lad;
    long long int lmul;
};

int mod=1000000007;
node tree[700009];
node mergenode(node a,node b){
    node c;
    c.sum=(a.sum+b.sum)%mod;
    return c;
}

node null(int x){
    node c;
    c.sum=0;
    c.lad=0;
    c.lmul=1;
    return c;
}
void flushdown(int curr,int low ,int high){
        tree[curr].sum=(tree[curr].sum*tree[curr].lmul+(high-low+1)*tree[curr].lad)%mod;
        tree[2*curr+1].lad=(tree[2*curr+1].lad*tree[curr].lmul+tree[curr].lad)%mod;
        tree[2*curr+1].lmul=(tree[2*curr+1].lmul*tree[curr].lmul)%mod;
        tree[2*curr+2].lad=(tree[2*curr+2].lad*tree[curr].lmul+tree[curr].lad)%mod;
        tree[2*curr+2].lmul=(tree[2*curr+2].lmul*tree[curr].lmul)%mod;      
        tree[curr].lad=0;
        tree[curr].lmul=1;
    }


node constructor( long long int  arr[],int  low, int  high, int  curr){
    if(low==high){
        tree[curr].sum=arr[low];
        tree[curr].lmul=1;
        tree[curr].lad=0;
        return tree[curr];
    }
    int  mid=low+(high-low)/2;
    tree[curr]=mergenode(constructor(arr,low,mid,2*curr+1),constructor(arr,mid+1,high,2*curr+2));
    tree[curr].lmul=1;
    tree[curr].lad=0;
    return tree[curr];
}
 
void createtree( long long int  arr[], int  n)
{
 constructor(arr,0,n-1,0);
}


node queryadd(  int  curr,  int  left, int  right,  int  low, int  high,long long int  add){
    if(tree[curr].lmul!=1||tree[curr].lad)flushdown(curr,low,high);
    if(left<=low&&right>=high){
        tree[curr].lad=add;
        flushdown(curr,low,high);
        tree[curr].sum=tree[curr].sum%mod; 
        return tree[curr];
    }
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
    int  mid=low+(high-low)/2;
    queryadd(2*curr+1,left,right,low,mid,add);
    queryadd(2*curr+2,left,right,mid+1,high,add);
    tree[curr].sum=(tree[2*curr+1].sum+tree[2*curr+2].sum)%mod;
    return tree[curr];
}

node querymul( int  curr, int  left, int  right, int  low, int  high, long long int  mul){
    if(tree[curr].lmul!=1||tree[curr].lad)flushdown(curr,low,high);
    if(left<=low&&right>=high){
        tree[curr].lmul=mul;
        flushdown(curr,low,high);
        tree[curr].sum=tree[curr].sum%mod;
        return tree[curr];
    }
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
    int  mid=low+(high-low)/2;
    querymul(2*curr+1,left,right,low,mid,mul);
    querymul(2*curr+2,left,right,mid+1,high,mul);
    tree[curr].sum=(tree[2*curr+1].sum+tree[2*curr+2].sum)%mod;
    return tree[curr];
}

node solution( int  curr, int  left, int  right, int  low, int  high){
    if(tree[curr].lmul!=1||tree[curr].lad)flushdown(curr,low,high);
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
    if(left<=low&&right>=high){return tree[curr];}
    long long int  mid=low+(high-low)/2;
    node result=mergenode(solution(2*curr+1,left,right,low,mid),solution(2*curr+2,left,right,mid+1,high));
    return result;
}
     long long int a[100005]={0},n=8,i,j,q,type,v;

int main(){
    int x,y;
    scanf("%lld %lld",&n,&q);
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    createtree(a,n);
    while(q--){
scanf("%lld",&type);
if(type==1){
    scanf("%d %d %lld",&x,&y,&v);
    x--;
    y--;
    queryadd(0,x,y,0,n-1,v);
}
else if(type==2){
    scanf("%d %d %lld",&x,&y,&v);
    x--;
    y--;
    querymul(0,x,y,0,n-1,v);
}
else if(type==3){
    scanf("%d %d %lld",&x,&y,&v);
    x--;
    y--;
    querymul(0,x,y,0,n-1,0);
    queryadd(0,x,y,0,n-1,v);
}
else if(type==4){
    scanf("%d %d",&x,&y);
    x--;
    y--;
    printf("%lld\n",solution(0,x,y,0,n-1).sum);
}
}
}