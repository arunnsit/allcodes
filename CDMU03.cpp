//alpha coder ! segment trees !
#include<stdio.h>
#include<math.h>
struct node{
    int data;
    int low;
    int high;
    int add;
};

node tree[1000000];

int constructor(int arr[],int low,int high,int curr){
    if(low==high){
        tree[curr].data=arr[low];
        tree[curr].low=low;
        tree[curr].high=high;
        tree[curr].add=0;
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
int findsum(int low,int high,int l,int r,int curr,int prev){
    if(low<l&&high<l)return 0;
    if(low>r&&high>r)return 0;
    if(low>=l&&high<=r){

        return tree[curr].data+(high-low+1)*(tree[curr].add+prev);
    }
    int mid=low+(high-low)/2;
    int ans=findsum(low,mid,l,r,2*curr+1,tree[curr].add+prev)+findsum(mid+1,high,l,r,2*curr+2,tree[curr].add+prev);
    return ans;
}
int lazyrangeupdate(int low,int high,int l,int r,int curr,int add){
    if(low>=l&&high<=r){
        tree[curr].add+=add;


        return 0;
    }
    if(low<l&&high<l){return 0;}
    if(r<low&&r<high){return 0;}
    int mid=low+(high-low)/2;
    lazyrangeupdate(low,mid,l,r,2*curr+1,add);
    lazyrangeupdate(mid+1,high,l,r,2*curr+2,add);
    return 0;
}

int main(){int t;
    scanf("%d",&t);
    while(t--){
            int a[100002]={0},n,l,r,i,q,type,add;
    scanf("%d %d",&n,&q);
    createtree(a,n);
    while(q--){
        scanf("%d",&type);
        if(type==0){scanf("%d %d %d",&l,&r,&add);l--;r--;lazyrangeupdate(0,n-1,l,r,0,add);}
        if(type==1){scanf("%d %d",&l,&r);l--;r--;printf("%d\n",findsum(0,n-1,l,r,0,0));}
    }

}
}
