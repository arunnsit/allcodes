#include<stdio.h>
#include<algorithm>
struct node{
	int x;
	int h;
};
bool cmp(node a,node b){
	return a.x<b.x;
}
using namespace std;
int dp[100005]={0};
node a[100005];
int solve(int n,int prev){
	if(n==0)return 0;
	if(dp[n])return dp[n];
	if(a[n].x+a[n].h<prev)
		dp[n]=max(dp[n],solve(n-1,a[n].x)+1);
	if(a[n].x-a[n].h>a[n-1].x)
		dp[n]=max(dp[n],solve(n-1,a[n].x-a[n].h)+1);
	return dp[n];

}
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d %d",&a[i].x,&a[i].h);
	a[0].x=-1000000009;	
    printf("%d\n",solve(n,1000000009));
}