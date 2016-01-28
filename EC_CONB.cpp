#include<stdio.h>
#include<math.h>
int main(){
	int t,n,x,p,i;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(n%2==0){
		x=log2(n);
		int sol=0;
		for(i=x;i>=0;i--){
						sol=sol<<1;

			if(1&(n>>(x-i))){
                sol=(sol|1);
			}
			}

		printf("%d\n",sol);
	}
	else printf("%d\n",n);
}}