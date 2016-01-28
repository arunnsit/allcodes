#include<stdio.h>
int ispower(long long int a){
	if(a==1)return 1;
	else if(a%2!=0)return 0;
	else return ispower(a/2);
}
int main(){
	int t;
	long long int a,b;
	scanf("%d",&t);
	while(t--){
		scanf("%lld %lld",&a,&b);
		int c=0;
		while(!ispower(a)){
			a=a/2;
			c++;
		}
		while(a!=b){
			if(a<b)a*=2;
			else a/=2;
			c++;
		}
		printf("%d\n",c);

	}
}