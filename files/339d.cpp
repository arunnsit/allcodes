  #include<stdio.h>
int tree[10000000]={0},a[1000000];
void maketree(int curr ,int low ,int high ,int n,int h)
{
	if(low==high){
		tree[curr]=a[low];
		return;
	}
	int mid=low+(high-low)/2;
	maketree(2*curr+1,low, mid,n,h+1);
    maketree(2*curr+2,mid+1, high,n,h+1);
   if((n-h)%2==1){
    	tree[curr]=tree[2*curr+1]|tree[2*curr+2];
    }
    else {
    	tree[curr]=tree[2*curr+1]^tree[2*curr+2];
    }
      // printf("%d %d\n",curr,tree[curr]);

}
void update(int curr ,int low ,int high ,int n,int h,int pos,int val){
	if(low==high&&low==pos){
		tree[curr]=val;
		// printf("%d %d\n",curr,tree[curr]);
		return;
	}
	int mid=low+(high-low)/2;
	if(pos>=low&&pos<=mid)update(2*curr+1,low, mid,n,h+1,pos,val);
    else update(2*curr+2,mid+1, high,n,h+1,pos,val);
   if((n-h)%2==1){
    	tree[curr]=tree[2*curr+1]|tree[2*curr+2];
    }
    else {
    	tree[curr]=tree[2*curr+1]^tree[2*curr+2];
    }
   // printf("%d %d\n",curr,tree[curr]);
}

int main(){
	int n,m,i,j,p=1,x,y,o=0;
	scanf("%d %d",&o,&m);
	for(i=0;i<o;i++)p*=2;
	n=p;	
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	maketree(0,0,n-1,o,0);
    for(i=0;i<m;i++){
    	scanf("%d %d",&x,&y);
    	update(0,0,n-1,o,0,x-1,y);
    	printf("%d\n",tree[0]);
    }

}