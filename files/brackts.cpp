//alpha coder ! segment trees !
#include<stdio.h>
#include<math.h>
#include<algorithm>
struct node{
    int left;
    int right;
};
char arr[30004];
node tree[1000000];
node mergenode(node a,node b){

    node c;
    int p=std::min(a.right,b.left);
    c.left=a.left+b.left-p;
    c.right=b.right+a.right-p;
    return c;
}
node constructor(char arr[],int low,int high,int curr){
    if(low==high){
        tree[curr].left=0;
        tree[curr].right=0;
        if(arr[low]=='(')tree[curr].right=1;
            else tree[curr].left=1;
      //  printf("curr:%d left:%d right:%d\n",curr,tree[curr].left,tree[curr].right);

        return tree[curr];
    }
    int mid=low+(high-low)/2;
    tree[curr]=mergenode(constructor(arr,low,mid,2*curr+1),constructor(arr,mid+1,high,2*curr+2));
    //printf("curr:%d left:%d right:%d\n",curr,tree[curr].left,tree[curr].right);
    return tree[curr];
}
void createtree(char arr[],int n)
{
 constructor(arr,0,n-1,0);
}
node pointupdate(int low,int high,int point ,int curr,int diff){
    if(point<low||point>high){
        node c;
        c.right=0;
        c.left=0;
        return c;
    }
    if(low==high){
        tree[curr].left=0;
        tree[curr].right=0;
        if(arr[low]=='('){
            tree[curr].left=1;
            arr[low]=')';
        }
        else {
            tree[curr].right=1;
            arr[low]='(';
        }
        //printf("curr:%d %d %d",curr,tree[curr].left,tree[curr].right);
        return tree[curr];
    }    
    if(low!=high){
        int mid=low+(high-low)/2;
        if(point>=low&&point<=mid)
        node a=pointupdate(low,mid,point,2*curr+1,diff);
        else
            node b=pointupdate(mid+1,high,point,2*curr+2,diff);
        tree[curr]=mergenode(tree[2*curr+1],tree[2*curr+2]);
        return tree[curr];
        //printf("curr:%d %d %d",curr,tree[curr].left,tree[curr].right);
    }
}
int query(){
    //printf("%d %d\n",tree[0].left,tree[0].right);
    return !tree[0].left&&!tree[0].right;
}

int main(){
    int t=10,i=0;
    for(i=1;i<=t;i++){ 
    int l,r,add,n,q,temp;
    scanf("%d %s",&n,arr);
    //printf("uo");
    createtree(arr,n);
    scanf("%d",&q);
    printf("Test %d:\n",i);
    while(q--){
        scanf("%d",&temp);
        if(temp)pointupdate(0,n-1,temp-1,0,0);
        else query()!=0?printf("YES\n"):printf("NO\n");
    }
    }
}
