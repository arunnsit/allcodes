#include<stdio.h>
long long int gcd(long long int a, long long int b){
	if(b==0)return a;
	else gcd(b,a%b);
}
long long int modcalc(long long int a,long long int b,long long int mod){
	long long int x=1,y=a;
    while(b>0){
    	if(b%2==1){
    		x=(x*y)%mod;
    	}
    	y=(y*y)%mod;
    	b/=2;
    }
    return x%mod;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long int n;
	scanf("%lld",&n);
	if(n==1)printf("NO\n");
	else if(n==2)printf("YES\n");
	else if(n%2==0)printf("NO\n");
	else{
		long long int k=0,m,N,c2=1,am,i;
		N=n-1;
		m=N;
        while(m*c2==N){
        	c2*=2;
        	k++;
        	m=N/c2;
        	if(m*c2!=N){
        		k--;
        		c2/=2;
        		m=N/c2;
        		break;
        	}
        }
        am=modcalc(2,m,n);

        long long int x;
        x=am==1?n-1:am;
        //printf("%lld\n",am);
        for(i=1;i<k;i++){
        	am=(am*am)%n;
        	//printf("%lld\n",am);
        	if(am==1){break;
            }
            x=am;
        }
        long long int a,b;
        if(x==n-1)printf("YES\n");
        else printf("NO\n");
	}
    
}
}