#include<stdio.h>
struct node{
	int val;
	int l;
	int r;
};
node tree[10000000];
node merge(node a,node b){
	node c;
	c.l=a.l;
	c.r=b.r;
	c.val=a.val+b.val;
	if(a.r==1&&b.l==1)c.val++;
	return c;
}
char a[300008];
void maketree(int curr,int low,int high){
	if(low==high){
		if(a[low]=='.'){
		tree[curr].val=0;
		tree[curr].l=1;
		tree[curr].r=1;
	}
	else 
	{
		tree[curr].val=0;
		tree[curr].l=0;
		tree[curr].r=0;

	}
	return ;
}
int mid =low+(high-low)/2;
maketree(2*curr+1,low,mid);
maketree(2*curr+2,mid+1,high);
tree[curr]=merge(tree[2*curr+1],tree[2*curr+2]);
return ;
}

void update (int curr,int low ,int high ,int pos, char p){
	if(low==high){
		a[low]=p;
		if(a[low]=='.'){
		tree[curr].val=0;
		tree[curr].l=1;
		tree[curr].r=1;
	}
	else 
	{
		tree[curr].val=0;
		tree[curr].l=0;
		tree[curr].r=0;

	}
	return;
}
int mid =low+(high-low)/2;
if(pos>=low&&pos<=mid)update(2*curr+1,low,mid,pos,p);
else update(2*curr+2,mid+1,high,pos,p);
tree[curr]=merge(tree[2*curr+1],tree[2*curr+2]);
return ;
}
node null(){
	node a;
	a.val=0;
	a.l=0;
	a.r=0;
	return a;
}
node solution(int curr,int left,int right,int low,int high){
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null();return temp;}
    if(left<=low&&right>=high){
        return tree[curr];}
    int mid=low+(high-low)/2;
    node result=merge(solution(2*curr+1,left,right,low,mid),solution(2*curr+2,left,right,mid+1,high));
    return result;
}
int main(){
	int x,y,z,n,m;
	char c[2];
	scanf("%d %d",&n,&m);
	scanf("%s",a);
	maketree(0,0,n-1);
	while(m--){
		scanf("%d %s",&x,c);
		update(0,0,n-1,x-1,c[0]);
		printf("%d\n",solution(0,0,n-1,0,n-1).val);

	}


}







