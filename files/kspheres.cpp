#include<algorithm>
#include<iostream>
using namespace std;
#include<vector>
#include<stdio.h>
int h[1003]={0};
long long int sp[1004]={0};
long long int dp[1004][1004]={0};

int main(){
	int n,m,c,i,j,k,l,x,y;
	long long int s=0;
	int mod=1000000007;
	scanf("%d %d %d",&n,&m,&c);
	for(i=0;i<n;i++)scanf("%d",&x),h[x]++;
	for(i=0;i<m;i++)scanf("%d",&y),dp[y][1]+=h[y];
	s=dp[1][1];	
	for(i=2;i<=c+2;i++){
		dp[i][2]=dp[i][1]*s;
		dp[i][2]%=mod;
		s+=dp[i][1];
		s%=mod;
		cout<<dp[i][2]<<" ";
	}	
	cout<<endl;
	for(i=3;i<=c+2;i++){
		s=dp[i-1][i-1];
		for(j=i;j<=c+2;j++){
			dp[j][i]=s*dp[j][1];
			s+=dp[j][i-1];
			s%=mod;
			dp[j][i]%=mod;
			cout<<dp[i][j]<<" ";
		}
		 cout<<endl;
	}
	for(i=2;i<=c+1;i++)
	{s=0;
		for(j=i;j<=c+1;j++)s=(s+dp[j][i])%mod;
		printf("%lld ",s);	
	}	
printf("\n");
}