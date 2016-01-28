#include<stdio.h>
int main()
{
	long long int t,tmp;
	scanf("%lld",&t);
	while(t--){
		long long int n,i,j;
		long long int a[35]={0};
		scanf("%lld",&n);
        for(i=0;i<n;i++){
        	scanf("%lld",&tmp);
        	for(j=0;j<=32;j++)
        		if((tmp>>j)&1)
        		a[j]++;
        }
        long long int x=1,k;
        long long int sol=0;
        for(j=0;j<=32;j++){
        	k=1+n-a[j];
        	k*=a[j];
        	sol+=k*x;
        	x*=2;
        }
        printf("%lld\n",sol);

	}

}