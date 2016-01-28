#include<stdio.h>
int a[500009];
int main(){
	int k,i,j,n,p=0;
	long long int s=0,ma=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<k;i++)s+=a[i];
	p=0;ma=s;
	for(i=1;i<n-k+1;i++){
		s-=a[i-1];
		s+=a[i+k-1];
		if(ma>s){p=i;ma=s;}
	}
	printf("%d\n",p+1);	

}