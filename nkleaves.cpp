#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int arr[100004]={0},dp[12][1017][1006]={0};
int solve(int k,int n,int prev)
{    
	if(k==1&&n==0){
	//cout<<"k:"<<k<<" n:"<<n<<" prev:"<<prev<<endl;
		return prev;}
	if(k<=0||n<0)return 99999999;
	if(dp[k][n][prev])return dp[k][n][prev];
	dp[k][n][prev]=min(solve(k,n-1,prev+arr[n])+prev,solve(k-1,n-1,0)+prev);
	//cout<<"k:"<<k<<" n:"<<n<<" prev:"<<prev<<" dp:"<<dp[k][n]<<endl;
    return dp[k][n][prev];
}
int main()
{
	int n,k,i,j;
	scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    	scanf("%d",&arr[i]);
    printf("%d\n",solve(k,n-1,0));

}