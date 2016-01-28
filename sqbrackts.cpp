#include<stdio.h>
int n,d,a[100],b[100]={0},i,j,dp[100][100]={0};

int sol(int i,int s){
	if(s<0)return 0;
	if(i==n&&s==0)return 1;
	else if(i==n)return 0;
	if(dp[i][s]!=-1)return dp[i][s];
	if(b[i]==1)return dp[i][s]=sol(i+1,s+1);
	else return dp[i][s]=sol(i+1,s+1)+sol(i+1,s-1);
}

int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	scanf("%d %d",&n,&d);
		n*=2;
	for(i=0;i<=n;i++)
	for(j=0;j<=n;j++)dp[i][j]=-1;
	for(i=0;i<=n;i++)b[i]=0;

	for(i=0;i<d;i++)
	{
		scanf("%d",&a[i]);
		b[a[i]-1]++;
	}
	printf("%d\n",sol(0,0));
	
}
}