#include<stdio.h>
#include<string.h>
int dp[300][30]={0};
int solve(char in[],int sum[],int presum,int pos,int n){
	//printf("presum:%d pos%d\n",presum,pos);
	if(pos>=n-1||(pos!=-1&&presum>sum[n]-sum[pos+1]))return 0;
	else if(pos>-1&&dp[presum][pos])return dp[presum][pos];
    else{
    	int prev=pos+1,sol=0;
    	while(sum[prev+1]-sum[pos+1]<presum)prev++;
    	while(sum[prev+1]-sum[pos+1]>=presum&&sum[prev+1]-sum[pos+1]<=sum[n]-sum[prev+1]&&prev<n-1){
    		sol++;
    		sol+=solve(in,sum,sum[prev+1]-sum[pos+1],prev,n);
    		prev++;
    		//printf("yo\n");
    	}
    	if(pos>-1)
    	dp[presum][pos]=sol;
    	return sol;

    }
}
int main(){
		char a[30];
		int cae=0;
		scanf("%s",a);
	while(a[0]>='0'&&a[0]<='9'){
			int s,n,i,j,t;cae++;
		int sum[30]={0};
    for(i=0;i<300;i++)
    	for(j=0;j<30;j++)dp[i][j]=0;
	n=strlen(a);
    sum[1]=a[0]-'0';
    for(i=1;i<n;i++)sum[i+1]=sum[i]-'0'+a[i];

	printf("%d. %d\n",cae,solve(a,sum,0,-1,n)+1);

	scanf("%s",a);

}
}