#include<stdio.h>
#include<iostream>
using namespace std;
struct node{
	int val;
	int lazy;
};
node tree[10000000];
node merge(node a,node b){
	node c;
	c.val=a.val+b.val;
	c.lazy=0;
	return c;
}
node null(){
	node c;
	c.val=0;
	c.lazy=0;
	return c;
}
void maketree(int curr,int low ,int high){
	if(low==high){
		tree[curr].val=0;
		tree[curr].lazy=0;
		return;
	}
	int mid=low+(high-low)/2;
	maketree(2*curr+1,low,mid);
	maketree(2*curr+2,mid+1,high);
	tree[curr]=merge(tree[2*curr+1],tree[2*curr+2]);
	return;
}
void flushdown(int curr,int low,int high){

	if(tree[curr].lazy)
	{
		tree[curr].val=high-low+1-tree[curr].val;
		tree[curr].lazy=0;
		//printf("l:%d h:%d v:%d\n",low,high,tree[curr].val);
		tree[2*curr+1].lazy=(tree[2*curr+1].lazy+1)%2;
		tree[2*curr+2].lazy=(tree[2*curr+2].lazy+1)%2;
	}
	return;

}
node solution(int curr,int low,int high,int left,int right)
{
	flushdown(curr,low,high);
	if(left<=low&&right>=high)return tree[curr];
	if((low<left&&high<left)||(low>right&&high>right))return null();
	int mid=low+(high-low)/2;
	node c=merge(solution(2*curr+1,low,mid,left,right),solution(2*curr+1,mid+1,high,left,right));
	return c;
}
void update(int curr,int low,int high,int left,int right)
{       
        flushdown(curr,low,high);
		if(left<=low&&right>=high){
			tree[curr].lazy=(tree[curr].lazy+1)%2;
			flushdown(curr,low,high);
			return;
		}
		if((low<left&&high<left)||(low>right&&high>right))return;	
		int mid=low+(high-low)/2;
	update(2*curr+1,low,mid,left,right);
	update(2*curr+2,mid+1,high,left,right);
	tree[curr]=merge(tree[2*curr+1],tree[2*curr+2]);
	return ;}
int main(){
	int n,q,x,y,z;
	scanf("%d %d",&n,&q);
	maketree(0,0,n-1);
	while(q--){
		scanf("%d %d %d",&x,&y,&z);
		if(x==0){
			update(0,0,n-1,y,z);
		}
		else printf("%d\n",solution(0,0,n-1,y,z).val);
	}
}