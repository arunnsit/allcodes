#include<stdio.h>
#include<algorithm>
using namespace std;
int dp[5000]={0};
	int n,a,b,c;

int sol(int n){
	if(n==0)return 0;
	if(n<0)return -999999999;
	if(dp[n])return dp[n];
	dp[n]=max(max(sol(n-a)+1,sol(n-b)+1),sol(n-c)+1);
	return dp[n];
}
int main(){
	scanf("%d %d %d %d",&n,&a,&b,&c);
	printf("%d\n",sol(n));

}