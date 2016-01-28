#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n,i,j;
		scanf("%lld",&n);
		long long int x[1009],y[1009];
        for(i=0;i<n;i++)scanf("%lld %lld",&x[i],&y[i]);
        sort(x,x+n);
        sort(y,y+n);
        printf("%lld\n",(x[n/2]-x[(n-1)/2]+1)*(y[n/2]-y[(n-1)/2]+1));

	}

}