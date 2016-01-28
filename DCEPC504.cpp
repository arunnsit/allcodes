#include<stdio.h>
int main(){
	long long int t,n,k;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld",&n,&k);
		int i,cur=0;
		long long p=1;
		while(p<k){
			p*=2;
		}
		//if(p!=k)p*=2;
		p/=2;
		//printf("p:%lld\n",p);
		while(k>1){
			if(k>p){cur++;}
			k-=p;
			while(p>=k)p/=2;
		}
		if(cur%2!=0)printf("Female\n");
		else printf("Male\n");
		//printf("%d\n",cur);
	}
}