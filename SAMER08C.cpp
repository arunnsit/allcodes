#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,i,j,k;
	cin>>n>>m;
	while(n&&m){
	int in[n+6][m+6];
	int dp[n+6][m+6],dp2[n+6];
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			cin>>in[i][j],dp[i][j]=in[i][j];
	for(i=0;i<n;i++)
	{for(j=0;j<m;j++)
	{    
		dp[i][j+2]=max(dp[i][j]+dp[i][j+2],dp[i][j+1]);
        dp[i][j+1]=max(dp[i][j+1],dp[i][j]);
	}
	dp2[i]=dp[i][m-1];
	//cout<<"row: "<<i<<dp2[i]<<endl;
    }
    for(i=0;i<n;i++){
    	dp2[i+2]=max(dp2[i+1],dp2[i]+dp2[i+2]);
    	dp2[i+1]=max(dp2[i+1],dp2[i]);
    }
    cout<<dp2[n-1]<<endl;	
    cin>>n>>m;
	}
}