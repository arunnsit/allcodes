#include<iostream>
using namespace std;
int dp[5003][5003]={0},a,b;
int solve(int n,int k)
{   //cout<<n<<" "<<k<<endl;
	if(n==0&&k>=0)return 1;
	if((k<=0&&n>=0)||n<=0)return 0;
    if(dp[n][k])return dp[n][k];
    int x=0;
    x=(solve(n-k,k)+solve(n,k-1))%1988;
    dp[n][k]=x;
    return x;

}
int main()
{
	int k,n,i,j;
	cin>>n>>k;
  
	while(k&&n)
	{  
		cout<<solve(n-k,k)<<endl;
			cin>>n>>k;
	}
}