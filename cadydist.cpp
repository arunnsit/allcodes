#include<stdio.h>
#include<algorithm>
int main(){
	long long int t,n,a[100007],i,b[100007];
    scanf("%lld",&n);
    while(n){
    	for(i=0;i<n;i++)scanf("%lld",&a[i]);
    	for(i=0;i<n;i++)scanf("%lld",&b[i]);
    	std::sort(a,a+n);
    	std::sort(b,b+n);
    	long long int s=0;
    	for(i=0;i<n;i++){
    		s+=a[i]*b[n-1-i];
    	}
        printf("%lld\n",s);

        scanf("%lld",&n);
}
0
}