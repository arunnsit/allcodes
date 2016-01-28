#include<stdio.h>
	int a[100007]={0};
int binary(int low,int high,int x){
    //printf("%d %d\n",low,high);
	if(low==high)return low;
	int mid=(high+low)/2;
	if(a[mid]>=x&&a[mid-1]<x)return mid;
    else if(a[mid-1]>=x)return binary(low,mid-1,x);
    else if(a[mid]<x)return binary(mid+1,high,x); 
}
int main(){
	int n,m,x,i;
	scanf("%d",&n);
    for(i=1;i<=n;i++){
    	scanf("%d",&a[i]);
    	a[i]+=a[i-1];
    }
    scanf("%d",&m);
    while(m--){
    	scanf("%d",&x);
    	printf("%d\n",binary(1,n,x));
    }
}