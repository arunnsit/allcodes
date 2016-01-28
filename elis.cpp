#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int dp[100]={0},arr[100];
int solve(int n)
{
	if(n<0)return 0;
	if(dp[n])return dp[n];
	int x=0;
	for(int i=0;i<n;i++)
	if(arr[n]>arr[i]){
		x=max(solve(i)+1,x);
	}

return dp[n]=x;

}
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)cin>>arr[i];
		arr[n]=1000000;
	printf("%d\n",solve(n));	
}