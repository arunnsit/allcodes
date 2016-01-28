#include<stdio.h>
#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
float dp[609][2009]={0};
int main()
{
	int t;
	scanf("%d",&t);
	memset(dp,0,sizeof(dp));
	int n,k,i,j,p;
		dp[1][6]=1.0/6.0;
		dp[1][1]=1.0/6.0;
		dp[1][2]=1.0/6.0;
		dp[1][3]=1.0/6.0;
		dp[1][4]=1.0/6.0;
		dp[1][5]=1.0/6.0;
		for(i=2;i<600;i++)
		{   for(p=1;p<2000;p++) 
			for(j=1;j<7&&p-j>=0;j++)
			dp[i][p]+=dp[i-1][p-j]/6.0;
			
		}

	while(t--)
	{
	    scanf("%d %d",&n,&k);
	    if(n<550&&k<1900){
		cout<<(int)(dp[n][k]*100)<<endl;}
	    else cout<<0<<endl;
	}
}