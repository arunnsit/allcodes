//alpha coder ! segment trees !
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
struct node{
    public:
    int sum;
    int suffix;
    int prefix;
    int sol;
};

node tree[10000000];int a[10000000];

node mergenode(node left,node right){
        node a;
        a.sum=left.sum+right.sum;
        a.prefix=max(left.sum+right.prefix,left.prefix);
        a.suffix=max(right.suffix,left.suffix+right.sum);
        a.sol=max(max(left.sol,right.sol),left.suffix+right.prefix);
        return a;
    }
    node null(){
         node temp;
        temp.suffix=-15009;
        temp.prefix=-15009;
        temp.sol=-15009;
        temp.sum=-15009;
        return temp;
    }

node constructor(int arr[],int low,int high,int curr){
    if(low==high){
        tree[curr].sum=arr[low];
        tree[curr].suffix=arr[low];
        tree[curr].prefix=arr[low];
        tree[curr].sol=arr[low];
        return tree[curr];
    }
    int mid=low+(high-low)/2;
    tree[curr]=mergenode(constructor(arr,low,mid,2*curr+1),constructor(arr,mid+1,high,2*curr+2));
    return tree[curr];
}
node solution(int curr,int left,int right,int low,int high){
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null();return temp;}
    if(left<=low&&right>=high){
        return tree[curr];}
    int mid=low+(high-low)/2;
    node result=mergenode(solution(2*curr+1,left,right,low,mid),solution(2*curr+2,left,right,mid+1,high));
    return result;

}
node update(int low,int high ,int curr,int index){
    if(index==low&&low==high){
        tree[curr].sum=a[index];
        tree[curr].prefix=a[index];
        tree[curr].suffix=a[index];
        tree[curr].sol=a[index];
        return tree[curr];
    }
    int mid=low+(high-low)/2;
    if(index<=mid){
        update(low,mid,2*curr+1,index);
    }
    else{
        update(mid+1,high,2*curr+2,index);
    }
    tree[curr]=mergenode(tree[2*curr+1],tree[2*curr+2]);
    return tree[curr];
}
void createtree(int arr[],int n)
{
 constructor(arr,0,n-1,0);
}
int main(){
    int n=8,l,r,add,m,i,t;node b;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    createtree(a,n);
    scanf("%d",&m);
    while(m--){
    scanf("%d %d %d",&t,&l,&r);
    if(t){b=solution(0,l-1,r-1,0,n-1);
    printf("%d\n",b.sol);}
    else {
        a[l-1]=r;
        update(0,n-1,0,l-1);
    }
}
}
