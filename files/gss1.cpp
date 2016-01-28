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

node tree[10000000];
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
    //printf("low: %d high :%d\n sum :%d\n prefix :%d\n suffix :%d\n sol :%d\n",low,high,tree[curr].sum,tree[curr].prefix,tree[curr].suffix,tree[curr].sol);
    //rintf("\n\n");
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
void createtree(int arr[],int n)
{
 constructor(arr,0,n-1,0);
}
int a[10000000];
int main(){
    int n=8,l,r,add,m,i;node b;
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    createtree(a,n);
    scanf("%d",&m);
    while(m--){
    scanf("%d %d",&l,&r);
    b=solution(0,l-1,r-1,0,n-1);
    printf("%d\n",b.sol);
}
}
