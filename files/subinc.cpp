#include<stdio.h>
long long int a[100009];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d",&n);
		int i,j,k;
		for(i=0;i<n;i++)scanf("%lld",&a[i]);
		int prev=0,p=a[0];
		long long int sol=0;	
		for(i=1;i<n;i++){
			if(p<=a[i]){
				prev++;
				p=a[i];
			}
			else {
				prev=0;
				p=a[i];
			}
         sol+=prev;
		}
		printf("%lld\n",sol+n);	
	}
}