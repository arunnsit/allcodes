#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;
long long int a[100009],prime[100009];
int e[1000009],f[1000009];
int mod=1000000007;

int main()
{
	int i,j,l,p;
	p=sqrt(100002);
	a[0]=1;
	a[1]=1;
	vector<int> chhote_primes,bade_primes;
	for(i=2;i<=p;i++)
		if(!prime[i])
		{   
			for(j=2*i;j<100002;j+=i)
				prime[j]++;
		}
    for(i=2;i<100002;i++)
    	{
    		if(i<=p&&!prime[i])chhote_primes.push_back(i);
            else if(!prime[i])bade_primes.push_back(i);
    		a[i]=1;
        }
    for(i=0;i<bade_primes.size();i++)
    {
    	for(j=bade_primes[i];j<100002;j+=bade_primes[i])
    		a[j]=(a[j]*bade_primes[i])%mod;
    }   

    int t,n,k,c,d,m;
   
    scanf("%d %d %d %d %d %d",&t,&n,&k,&c,&d,&m);
    for(i=1;i<t;i++)scanf("%d",&e[i]);	
    for(i=1;i<t;i++)scanf("%d",&f[i]);
    j=0;	
    while(t--)
    {
    	int l=n,r=n-k+1;
    	long long int x=1;
    	for(i=0;i<chhote_primes.size();i++)
    	{
    		int fac=chhote_primes[i];
    		while(1)
    		{
    			if(l/fac!=r/fac||r%fac==0||l%fac==0){fac*=chhote_primes[i];}
    			else {fac/=chhote_primes[i];break;}
    		}
 
    		x=(x*fac)%mod;
    		if(chhote_primes[i]>l)break;
    	}
    	
    	long long int mom=1;
    	unordered_map<int ,int>map1;
    	for(i=r;i<=l;i++){
    		if(!map1[a[i]])mom=(mom*a[i])%mod;
    		map1[a[i]]++;

    	}
    	x=(x*mom)%mod;
        j++;
    	n=1+(c*x+e[j])%m;
    	k=1+(d*x+f[j])%n;
            	printf("%lld\n",x);
 
    }	
 
    
 
} 