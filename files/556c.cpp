#include<stdio.h>
int main(){
	int n,m,t,tt,p,mt,tc;
	long long int s=0;
	scanf("%d %d",&n,&m);
	mt=m;
	while(m--){
		scanf("%d",&t);
		tc=t;
		if(t--){scanf("%d",&tt);p=tt;tc--;}
        int u=0;
		while(t--){
			scanf("%d",&tt);
			if(p+1!=tt&&!u){s+=2*(t+1);u=1;}
			p=tt;
		}

	}
	printf("%lld\n",s+mt-1);

}