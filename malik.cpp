#include<stdio.h>
#include<algorithm>
#include<cstdio>
#define getchar getchar_unlocked

struct node{
     int one;
     int two;
     int zero;
    int islazy;
};
inline void scanint(int &n) {
	n = 0;
	int ch = getchar_unlocked();
	int sign = 1;
	while (ch < '0' || ch > '9') {
		if (ch == '-')
			sign = -1;
		ch = getchar_unlocked();
	}
	while (ch >= '0' && ch <= '9')
		n = (n << 3) + (n << 1) + ch - '0', ch = getchar_unlocked();
	n = n * sign;
}
inline void print_int(int N)
{
    register int ctr=0;
    char buffer[12];
    do
    {
        buffer[ctr++]=N%10 +48;
        N/=10;
    }while(N);
    ctr--;
    while(ctr>=0)
        putchar_unlocked(buffer[ctr--]);
    putchar_unlocked('\n');
}

node tree[700009];
node mergenode(node a,node b){
    node c;
    c.one=a.one+b.one;
    c.two=a.two+b.two;
    c.zero=a.zero+b.zero;
    c.islazy=0;
    return c;
}

node null(int x){
    node c;
    c.one=0;
    c.two=0;
    c.zero=0;
    c.islazy=0;
    return c;
}
void flushdown(int curr,int low ,int high){
	tree[curr].islazy%=3;
	tree[2*curr+1].islazy+=tree[curr].islazy;
	tree[2*curr+2].islazy+=tree[curr].islazy;
	while(tree[curr].islazy>0){
		 int temp;
		temp=tree[curr].two;
		tree[curr].two=tree[curr].one;
		tree[curr].one=tree[curr].zero;
		tree[curr].zero=temp;
		tree[curr].islazy--;
	}
    tree[curr].islazy=0;

      
    }


node constructor( int  arr[],int  low, int  high, int  curr){
    if(low==high){
        tree[curr].one=0;
        tree[curr].zero=1;
        tree[curr].two=0;
        tree[curr].islazy=0;
        return tree[curr];
    }
    int  mid=low+(high-low)/2;
    tree[curr]=mergenode(constructor(arr,low,mid,2*curr+1),constructor(arr,mid+1,high,2*curr+2));
    tree[curr].islazy=0;
    return tree[curr];
}
 
void createtree(int  arr[], int  n)
{
 constructor(arr,0,n-1,0);
}


node update(  int  curr,  int  left, int  right,  int  low, int  high,long long int  add){
    if(tree[curr].islazy)flushdown(curr,low,high);
    if(left<=low&&right>=high){
        tree[curr].islazy++;
        flushdown(curr,low,high);
        tree[curr].islazy=0;
        return tree[curr];
    }
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
     int  mid=low+(high-low)/2;  
     update(2*curr+1,left,right,low,mid,add);
     update(2*curr+2,left,right,mid+1,high,add);  
    tree[curr]=mergenode(tree[2*curr+1],tree[2*curr+2]);
    tree[curr].islazy=0;
    return tree[curr];
}

node solution( int  curr, int  left, int  right, int  low, int  high){
        if(tree[curr].islazy)flushdown(curr,low,high);
    if((low<left&&high<left)||(low>right&&high>right)){node temp=null(0);return temp;}
    if(left<=low&&right>=high){return tree[curr];}
    long long int  mid=low+(high-low)/2;
    node result=mergenode(solution(2*curr+1,left,right,low,mid),solution(2*curr+2,left,right,mid+1,high));
    return result;
}
     int a[100005]={0},n=8,i,j,q,type,v;

int main(){
    int x,y;
    scanint(n);
    scanint(q);
    createtree(a,n);
    while(q--){

    scanint(type);
    scanint(x);
    scanint(y);
    if(type==0){
    update(0,x,y,0,n-1,0);
    }
    else{
    print_int(solution(0,x,y,0,n-1).zero);
}
}
}