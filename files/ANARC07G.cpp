#include<stdio.h>
int dp[10000][5]={0};
#include<math.h>

int solve(int n, int k)
{
	if(n==0) return (dp[n][k] = 1);
	if(dp[n][k]) return dp[n][k];
	int i, temp = 0;
	for(i=k; i>0; i--)
		if(n-i>=0)
			temp += solve(n-i, i);
	return (dp[n][k] = temp);
}


int main(){
	int i,j,prime[1000],n,k,t,sq,c=1;
	prime[1]=2;
	for(i=3;i<9000;i++){
		sq=sqrt(i);
		int m=0;
		for(j=2;j<=sq;j++){
			if(i%j==0){
				m=1;
				break;}

		}
		if(!m&&i%4==1){
			prime[++c]=i;
		}


	}
	
	scanf("%d",&t);
	while(t--){
	scanf("%d %d",&n,&k);
	printf("%d\n",solve(prime[n],k));




}
}