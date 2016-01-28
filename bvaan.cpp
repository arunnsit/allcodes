#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
int dp[102][102][102]={0};
string a,b;
int sol(int l1,int l2,int k)
{   //cout<<l1<<" "<<l2<<" "<<k<<endl;
	if(k==0)return 0;
	if(l1<0||l2<0||k<0)return -100000000;
	if(dp[l1][l2][k])return dp[l1][l2][k];
	if(a[l1]==b[l2]){
		dp[l1][l2][k]=max(sol(l1-1,l2-1,k-1)+a[l1],max(sol(l1-1,l2,k),sol(l1,l2-1,k)));
	}
	else{
		dp[l1][l2][k]=max(sol(l1-1,l2,k),sol(l1,l2-1,k));
	}
	return dp[l1][l2][k];
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   memset(dp,0,sizeof(dp));
		int k=0;
		cin>>a>>b>>k;
		int solve;
		solve=sol(a.length()-1,b.length()-1,k);
        cout<<((solve<0)?0:solve)<<endl;
	}
}