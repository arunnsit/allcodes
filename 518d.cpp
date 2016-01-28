#include<iostream>
#include<iomanip>
using namespace std;
int nm;

long double dp[2005][2005]={0},p;
long double sol(int n,int t)
{
	if(t==0&&n>=0)
		return nm-n;
	if(n==0)
		return nm;
	if(dp[n][t])
		return dp[n][t];
	dp[n][t]=p*sol(n-1,t-1)+(1-p)*sol(n,t-1);
	return dp[n][t];
}
int main()
{
	int n,t;
	cin>>n>>p>>t;
	nm=n;
	cout<<fixed;
	cout<<setprecision(100)<<sol(n,t)<<endl;

}