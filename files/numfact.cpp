#include<stdio.h>
long long int prime[1000009]={0},po[1000000]={0};
int main(){
	long long  int t,n,tmp,i,j,k,pos=0;
	scanf("%lld",&t);
	for(i=2;i<1007;i++)
		if(prime[i]==0){
			for(j=2*i;j<1000003;j+=i){
				prime[j]++;
			}
			po[pos++]=i;
		}
	while(t--)
	{   long long int a[1000009]={0};
		scanf("%lld",&n);
		while(n--){
			scanf("%lld",&tmp);
			i=0;
			while(po[i]<=tmp&&po[i]!=0){
				if(tmp%po[i]==0){
					while(tmp%po[i]==0){
					a[po[i]]++;
					tmp/=po[i];
				}
				}
				i++;
			}

		}
		long long int s=1;
		i=0;
		while(i<=pos){
			s=s*(a[po[i]]+1);
			i++;
		}
		printf("%lld\n",s);


	}
}