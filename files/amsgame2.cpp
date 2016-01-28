#include<stdio.h>
long long int gcd(int a, int b)
{
	if(b==0)return a;
	else return gcd(b,a%b);
}
 int n,k,a[109];
long long int  d[62][10007]={0};
long long int dp(long long int pos,long long int gc)
{   if(pos==n+1&&gc==1)return 1;
    if(pos==n+1)return 0;
	if(d[pos][gc]!=-1)return d[pos][gc];
    d[pos][gc]=dp(pos+1,gc)+dp(pos+1,gcd(a[pos],gc));
    return d[pos][gc];

}

int main(){
	int t,i,j;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=1;i<=n;i++)scanf("%d",&a[i]);
			long long int sol=0;
		for(i=1;i<=n;i++)
			for(j=1;j<=10006;j++)d[i][j]=-1;
        for(i=1;i<=n-1;i++){
        	sol+=dp(i+1,a[i]);
        	}		
	printf("%lld\n",sol);
}
}