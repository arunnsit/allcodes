#include<iostream>
#include<stdio.h>
#include<algorithm>
int max(int a,int b){
	return a>b?a:b;
}
using namespace std;
int main(){
	int n,m,k,i,j;
	scanf("%d",&n);
	while(n--)
	{
		int dp[10005][2]={0},in[202][2]={0};

		scanf("%d %d",&k,&m);

		for(i=1;i<=m;i++){
			scanf("%d %d",&in[i][0],&in[i][1]);
		}
		for(i=1;i<=m;i++){
			for(j=0;j<=k;j++){
				if(j>=in[i][0])
				dp[j][i%2]=max(dp[j-in[i][0]][(i-1)%2]+in[i][1],dp[j][(i-1)%2]);
			    else dp[j][i%2]=dp[j][(i-1)%2];
			}
		}
		printf("Hey stupid robber, you can get %d.\n",dp[k][m%2]);
	}

}