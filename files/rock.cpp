#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int dp[250][250]={0};
int solve(int start ,int end,int sweet[300],int sour[300],char a[300],int l){
	//printf("start %d end %d\n",start,end);
	if(sweet[end+1]-sweet[start]>sour[end+1]-sour[start])return end-start+1;
	if(start==end&&a[start]=='0')return 0;
	if(start==end&&a[start]=='1')return 1;
	if(dp[start][end]!=-1)return dp[start][end];
	for(int i=start;i<end;i++){
		dp[start][end]=max(dp[start][end],solve(start,i,sweet,sour,a,l)+solve(i+1,end,sweet,sour,a,l));
	}
	return dp[start][end];

}
int main(){
	int t,i,j,k,n,l;
	char a[300];
	int sour[300]={0};
	int sweet[300]={0};
	scanf("%d",&t);
	while(t--){
		scanf("%d %s",&l,a);
		for(i=0;i<=l;i++)
			for(j=0;j<=l;j++)dp[i][j]=-1;
		for(i=0;a[i]!='\0';i++){
			if(a[i]=='0'){
				sour[i+1]=sour[i]+1;
				sweet[i+1]=sweet[i];

			}
			else {
				sweet[i+1]=sweet[i]+1;
				sour[i+1]=sour[i];
			}
			//printf("sw %d sour %d\n",sweet[i+1],sour[i+1]);
	 }
	printf("%d\n",solve(0,l-1,sweet,sour,a,l));
}

}