//alpha coder ! segment trees !
#include<stdio.h>
#include<math.h>
struct node{
    int data;
    int low;
    int high;
    int stor[3];
};
node makenode(int sum){
    node temp;

}
node tree[1000000];

int constructor(int arr[],int low,int high,int curr){
    if(low==high){
        tree[curr].data=arr[low];
        tree[curr].low=low;
        tree[curr].high=high;
        return arr[low];
    }
    int mid=low+(high-low)/2;
    tree[curr].data=constructor(arr,low,mid,2*curr+1)+constructor(arr,mid+1,high,2*curr+2);
    tree[curr].low=low;
    tree[curr].high=high;
    return tree[curr].data;
}
void createtree(int arr[],int n)
{
 constructor(arr,0,n-1,0);
}
int pointupdate(int low,int high,int point ,int curr,int diff){
    if(point<low||point>high)return 0;
    tree[curr].data+=diff;
    if(low!=high){
        int mid=low+(high-low)/2;
        pointupdate(low,mid,point,2*curr+1,diff);
        pointupdate(mid+1,high,point,2*curr+2,diff);
    }
}
int findsum(int low,int high,int l,int r,int curr){
    if(low<l&&high<l)return 0;
    if(low>r&&high>r)return 0;
    if(low>=l&&high<=r){
        return tree[curr].data;
    }
    int mid=low+(high-low)/2;
    int ans=findsum(low,mid,l,r,2*curr+1)+findsum(mid+1,high,l,r,2*curr+2);
    return ans;
}

int main(){
    int a[]={1,2,3,4,5,6,7,8},n=8,l,r;
    createtree(a,n);
    printf("created\n");
    scanf("%d %d",&l,&r);r=r-a[l];
    pointupdate(0,n-1,l,0,r);
    scanf("%d %d",&l,&r);
    printf("%d\n",findsum(0,n-1,l,r,0));
}
