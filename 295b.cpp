#include<iostream>
#include<algorithm>
using namespace std;
long long int dp[501][501],seq[501],mark[501]={0};
long long int sol[501]={0};
int main()
{
	int n,i,j,k,l,m;
	cin>>n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)cin>>dp[i][j];
    for(i=1;i<=n;i++)cin>>seq[i];

    for(k=n;k>=1;k--)
    {   
    	mark[seq[k]]++;
    	for(i=1;i<=n;i++)
    		for(j=1;j<=n;j++)
    			{
    				dp[i][j]=min(dp[i][j],dp[i][seq[k]]+dp[seq[k]][j]);
    				if(mark[i]&&mark[j])sol[k]+=dp[i][j];
    			}
    			
    }

	for(i=1;i<=n;i++)cout<<sol[i]<<" ";
	cout<<endl;		


}