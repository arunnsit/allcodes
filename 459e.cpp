#include<stdio.h>
#include<algorithm>
struct node{
	int u;
	int v;
	int w;
};
using namespace std;
bool cmp(node a,node b){
	
	return a.w<b.w;
}
int dp[400000][3]={0};
node a[400000];
int main(){
	int n,m,x,y,i,j,s=-1;
	scanf("%d %d",&n,&m);
    for (int i = 0; i < m; ++i)
    {
    	scanf("%d %d %d",&a[i].u,&a[i].v,&a[i].w);
    	/* code */
    }
    sort(a,a+m,cmp);
    for (int i = 0; i < m; ++i){
    	if(dp[a[i].u][0]+1>dp[a[i].v][0]&&a[i].w>dp[a[i].u][1]){
    		dp[a[i].v][2]=dp[a[i].v][0];
    		dp[a[i].v][0]=dp[a[i].u][0]+1;
    		dp[a[i].v][1]=a[i].w;
    		    	s=max(dp[a[i].v][0],s);

    	}
    	else if(dp[a[i].u][2]+1>dp[a[i].v][0]&&a[i].w==dp[a[i].u][1]){
    		dp[a[i].v][2]=dp[a[i].v][0];
    		dp[a[i].v][0]=dp[a[i].u][2]+1;
    		dp[a[i].v][1]=a[i].w;
    		    	s=max(dp[a[i].v][0],s);

    }}
    printf("%d\n",s);
}