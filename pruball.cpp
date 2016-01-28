#include<iostream>
#include<algorithm>
using namespace std;
int dp[55][1007]={0},m;
int solve(int b,int floors)
{   
	if(b==1)return floors;
	if(dp[b][floors])return dp[b][floors];
	int x=899999999;
	if(floors==1||floors==0)return floors;
	for(int i=1;i<=floors;i++)
	{
		x=min(max(solve(b-1,i-1),solve(b,floors-i)),x);
	}
	return dp[b][floors]=x+1;
}
int main()
{
	int t,i,j,k,c,l,x,y;
	cin>>t;
	while(t--)
	{
		cin>>k>>x>>y;
		cout<<k<<" "<<solve(x,y)<<endl;

	}

}