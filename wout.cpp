#include<stdio.h>
long long int sum[1000009]={0},count[1000009][2]={0};
int main(){
	long long int t,n,h;
	scanf("%lld",&t);
	while(t--){
		scanf("%lld %lld",&n,&h);
		long long int i=0,x,y;
		for(i=0;i<=n+2;i++)
		{
			sum[i]=0;
			count[i][0]=0;
			count[i][1]=0;
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld %lld",&x,&y);
			count[x+1][0]++;
			count[y+1][1]++;
		}
		long long int s=0;
		for(i=1;i<=n;i++)
		{
			s+=count[i][0];
			sum[i]=s;
			s-=count[i][1];
		}
		for(i=1;i<=n;i++)
		{
			sum[i]+=sum[i-1];
			//printf("i:%d sum:%lld\n",i,sum[i]);
		}
		long long int rec=h*n,sol=0;
		for(i=1;i<=n-h+2;i++){
			if(sol<sum[i+h-1]-sum[i-1]){
				sol=sum[i+h-1]-sum[i-1];
			}
			//printf("%lld %lld\n",i+h-1,i);
		}
		printf("%lld\n",rec-sol);	


	}
}