#include<iostream>
#include<vector>
using namespace std;
vector<long long int> v[2001];
long long int dp[2002][2002]={0};
int main(){
	int n,k,i,j,p,mod=1000000007;
	long long int s=0;
    cin>>n>>k;
	for(i=1;i<=n;i++)
		for(j=i;j<=n;j+=i)
			v[j].push_back(i);
    for(j=1;j<=n;j++)dp[j][1]=1;
	for(i=2;i<=k;i++){
		for(j=1;j<=n;j++){
			for(p=0;p<v[j].size();p++)dp[j][i]=(dp[j][i]+dp[v[j][p]][i-1])%mod;
		}
	}
	 for(j=1;j<=n;j++)s=(s+dp[j][k])%mod;
	cout<<s		<<endl;	


}		