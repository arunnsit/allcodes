#include<stdio.h>
int main(){
	long long int n,a[40]={0},i,j,tmp;
	scanf("%lld",&n);
	while(n--)
	{
		scanf("%lld",&tmp);
		for(i=0;i<=32;i++){
			if((tmp>>i)&1)
				a[i]++;
		}
	}
	long long int s=0,x=1;
		for(i=0;i<=32;i++)
		{   
			s+=(a[i]*(a[i]-1))*x;
			x*=2;
		}
		printf("%lld\n",s/2);
}