#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int a[102],n1,k1;
long long int dp[105][105]={0};
long long int  solve(int n,int k)
{   //cout<<"n:"<<n<<" k:"<<k<<endl;
	if(k<0||n<0)return 999999999999;
	if(k==0)return 0;
	if(dp[n][k])return dp[n][k];
	long long int  x=999999999999;
    for(int i=0;i<k1;i++)
    {
    	if(k-(i+1)>=0&&a[i]>=0)
        x=min(x,solve(n,k-(i+1))+a[i]);
    }
    return dp[n][k]=x;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   int n,k;
		cin>>n>>k;
		memset(dp,0,sizeof(long long int)*105*105);
		n1=n;
		k1=k;
		long long int sol=0;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
		}
		sol=solve(n,k);
		cout<<((sol>=999999999999)?-1:sol)<<endl;
	}
}
