//silly mistake in comparison
#include<stdio.h>
#include<algorithm>
using namespace std;
int dp[1002][1002]={0};
int n,a[1005],i;

int solve(int start,int end)
{   
	if(start==end-1)return dp[start][end]=abs(a[start]-a[end]);
	if(dp[start][end])return dp[start][end];

    if(a[start+1]>=a[end])dp[start][end]=a[start]-a[start+1]+solve(start+2,end);
    else dp[start][end]=a[start]-a[end]+solve(start+1,end-1);

    if(a[start]>=a[end-1])dp[start][end]=max(dp[start][end],a[end]-a[start]+solve(start+1,end-1));
    else dp[start][end]=max(dp[start][end],a[end]-a[end-1]+solve(start,end-2));
    
    return dp[start][end];
}
int main(){
	scanf("%d",&n);
	int cas=0,j;
	while(n){
		for(i=0;i<n;i++)scanf("%d",&a[i]);
		for(i=0;i<=n+1;i++)
		for(j=0;j<=n+1;j++)dp[i][j]=0;	
        printf("In game %d, the greedy strategy might lose by as many as %d points.\n",++cas,solve(0,n-1));
		scanf("%d",&n);
	}


}