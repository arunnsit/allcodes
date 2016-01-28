#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
long long int arr[5005]={0};
long long int dp[5005][5005]={0};
int m;
long long int solve(int n,int k)
{
	if(n>=0&&k==0)
		return 0;
    if(n==0)
    	return -9999999999;
    if(dp[n][k]!=-1)
    	return dp[n][k];
    long long int so=0;
    so=solve(n-1,k);
    if(n-m>=0)
    so=max(so,solve(n-m,k-1)+arr[n]-arr[n-m]);
    return dp[n][k]=so;

}
int main()
{   
	memset(dp,-1,sizeof(dp));
	int i,n,k;
	cin>>n>>m>>k;
	for(i=1;i<=n;i++)
		{cin>>arr[i];arr[i]+=arr[i-1];}
	cout<<solve(n,k)<<endl;


}