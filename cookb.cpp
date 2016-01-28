#include<stdio.h>
bool ispower(int n){
	int i,j,k=0;
	while(n!=1){
		if(n%2==0)n/=2;
		else {k=1;
			break;}
	}
	return k==0;
}
int main(){
	int t,n,p;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		p=0;
		p=ispower(n+1);
		if(n==1)printf("2\n");
		else if(p==1)printf("%d\n",(n+1)/2-1);
		else printf("-1\n");


	}
}