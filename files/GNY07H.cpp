#include<iostream>
using namespace std;
int dp[30]={0};
int solve(int n)
{
	if(n==0)return 1;
	if(n<0)return 0;
	if(dp[n])return dp[n];
	int x=0;
	int i=4;
	while(n-i>=0)
	{
		x+=3*solve(n-i);
		i+=2;
	}
	x+=4*solve(n-2);
	x+=solve(n-1);
	i=3;
	while(n-i>=0)
	{
		x+=2*solve(n-i);
		i+=2;
	}
	return dp[n]=x;
}

int main()
{
	int x,t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>x;
		cout<<i<<" "<<solve(x)<<endl;
	}

}