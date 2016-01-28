#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int t,n,m,k;
	cin>>t;
	while(t--){
		int a[502],b[502],dp[2000]={0},m=0,i,j;
		long long int s=0;
		cin>>n;
		for(i=0;i<n;i++){cin>>a[i];if(a[i]>m)m=a[i];}
		for(i=0;i<n;i++)cin>>b[i];
		for(i=1;i<=2*m;i++){
		dp[i]=9999999;	
		for(j=0;j<n;j++)if(i-b[j]>=0){
			dp[i]=min(dp[i-b[j]]+1,dp[i]);
		}	

	}
	for(i=0;i<n;i++)s+=dp[2*a[i]];
	cout<<s<<endl;	

}
}