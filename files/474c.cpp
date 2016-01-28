#include<stdio.h>
long long int a[100009]={0},sum[100009]={0};
int main(){
	long long  int t,k,i,mod=1000000007,p,b;
	scanf("%I64d %I64d",&t,&k);
	a[0]=1;
	for(i=0;i<=100002;i++)
		{if(i+k<=100002)a[i+k]=(a[i+k]+a[i])%mod;
	    a[i+1]=(a[i+1]+a[i])%mod;
	}
	
	sum[0]=0;
	for(i=1;i<=100002;i++)sum[i]=(sum[i-1]+a[i])%mod;

	while(t--){
		scanf("%I64d %I64d",&p,&b);
		printf("%I64d\n",(sum[b]-sum[p-1]>=0)?(sum[b]-sum[p-1]):(mod+sum[b]-sum[p-1]));

	}

}