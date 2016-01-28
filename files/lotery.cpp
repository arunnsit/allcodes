#include<stdio.h>
long long int u[100009]={0},p[10000];
long long int e[1000009],f[1000009];
int main(){
	long long int t,n,k,a,b,m,i,j=0,c=0,mod=1000000007;
	for(i=2;i<100002;i++)
		if(!u[i])
			{p[c++]=i;
			for(j=2*i;j<100002;j+=i)
				u[j]++;
		}
	scanf("%lld %lld %lld %lld %lld %lld",&t,&n,&k,&a,&b,&m);
	for(i=1;i<t;i++)scanf("%lld",&e[i]);	
    for(i=1;i<t;i++)scanf("%lld",&f[i]);	
    j=0;
    while(t--)
    {   long long int x=1,v1=n,v2=n-k+1;
    	for(i=0;i<c;i++)
    	{
    		long long int fac=p[i];
    		while(1)
    		{
    			if(v1/fac!=v2/fac||v2%fac==0||v1%fac==0){fac*=p[i];}
    			else {fac/=p[i];break;}
    		}

    		x=(x*fac)%mod;
    		if(p[i]>v1)break;
    	}
    	j++;
    	n=1+(a*x+e[j])%m;
    	k=1+(b*x+f[j])%n;
            	printf("%lld\n",x);


    }
}