#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int a[100009]={0},c[100009]={0};
		long long int n,k,open_bread=0,pack=0,i;
		scanf("%lld %lld",&n,&k);
        for(i=0;i<n;i++){
        	scanf("%lld",&c[i]);
        	if(open_bread>=c[i]){
        		open_bread-=c[i];
        	}
        	else{
        		c[i]-=open_bread;
        		open_bread=0;
        		if(c[i]%k==0){
        			pack+=c[i]/k;
        		}
        		else{
        			pack+=c[i]/k+1;
        			open_bread=k-c[i]%k;
        		}

        	}
        	if(open_bread){
        		open_bread--;
        	}
        	//printf("open_bread:%lld\n",open_bread);
	}
	printf("%lld\n",pack);

}
}