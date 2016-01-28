#include<stdio.h>
#include<algorithm>
using namespace std;
 int dp[10000005]={0};
int arr[600000][2],w,k,p,i;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--){
		int s=0,j;
		scanf("%d %d %d",&w,&k,&p);
        for(i=0;i<p;i++)scanf("%d %d",&arr[i][0],&arr[i][1]);
        for(i=0;i<=k-w+100;i++)dp[i]=999999999;
        dp[0]=0;	
        for(i=0;i<=k-w+1;i++)
        if(dp[i]!=999999999)	
        for(j=0;j<p;j++)
        if(i+arr[j][1]<=k-w+1)	
        dp[i+arr[j][1]]=min(dp[i+arr[j][1]],dp[i]+arr[j][0]);

    if(dp[k-w]==999999999)printf("This is impossible.\n");
    else printf("The minimum amount of money in the piggy-bank is %d.\n",dp[k-w]);
}
}
