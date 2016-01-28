#include<iostream>
#include<algorithm>
using namespace std;
long long int dp1[1003][1003]={0},dp2[1003][1003]={0},dp3[1003][1003]={0},dp4[1003][1003]={0},data[1003][1003]={0};
int main()
{
	long long int n,m,i,j,k,l,sol=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)cin>>data[i][j];
	for(i=1;i<=n;i++)
		for(j=1;j<=m;j++)dp1[i][j]=max(dp1[i-1][j],dp1[i][j-1])+data[i][j];
    for(i=n;i>=1;i--)
		for(j=1;j<=m;j++)
			dp2[i][j]=max(dp2[i+1][j],dp2[i][j-1])+data[i][j];
    for(i=n;i>=1;i--)
		for(j=m;j>=1;j--)dp3[i][j]=max(dp3[i+1][j],dp3[i][j+1])+data[i][j];
    for(i=1;i<=n;i++)
		for(j=m;j>=1;j--)dp4[i][j]=max(dp4[i-1][j],dp4[i][j+1])+data[i][j];
    

   for(i=2;i<=n-1;i++)
		for(j=2;j<=m-1;j++){
			sol=max(sol,max(dp1[i][j-1]+dp3[i][j+1]+dp2[i+1][j]+dp4[i-1][j],dp1[i-1][j]+dp3[i+1][j]+dp2[i][j-1]+dp4[i][j+1]));
		}
		cout<<sol<<endl;

}