//alpha coder ! segment trees !
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
struct node{
    public:
    int ma;
    int smax;
};

node tree[10000000];int a[10000000];

node mergenode(node left,node right){
        node a;
        a.ma=max(left.ma,right.ma);
        a.smax=max(min(left.ma,right.ma),max(left.smax,right.smax));
        return a;
    }
    node null(){
         node temp;
        temp.ma=0;
        temp.smax=0;
        return temp;
    }

node constructor(int arr[],int low,int high,int curr){
    if(low==high){
        tree[curr].ma=arr[low];
        tree[curr].smax=0;
        return tree[curr];
    }
    int mid=low+(high-low)/2;
    tree[curr]=mergenode(constructor(arr,low,mid,2*curr+1),constructor(arr,mid+1,high,2*curr+2));
    //printf("low: %d high :%d\n max :%d\n second :%d\n",low,high,tree[curr].ma,tree[curr].smax);
    //printf("\n\n");
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
node update(int low,int high ,int curr,int index){
    if(index==low&&low==high){
        tree[curr].ma=a[index];
        tree[curr].smax=0;
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


int main(){
    int n=8,l,r,add,m,i;node b;char o[2];
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    createtree(a,n);
    scanf("%d",&m);
    while(m--){
    scanf("%s %d %d",&o,&l,&r);
    if(o[0]=='Q')
    {b=solution(0,l-1,r-1,0,n-1);
    printf("%d\n",b.ma+b.smax);}
    else{a[l-1]=r;
        update(0,n-1,0,l-1);
    }
}
}
