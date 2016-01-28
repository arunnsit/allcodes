#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	long long int a,b,n,d;
	while(t--){
		scanf("%lld",&n);
		a=1;
		b=2;
		int c=1;
		while(1){
			if(a<=n&&n<b){break;}
			d=b;
			b+=a;
			a=d;
			c++;

		}
		printf("%d\n",c);

	}
}