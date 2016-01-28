#include<stdio.h>
#include<algorithm>
using namespace std;
int dp[3002][3002]={0};
int solve(int prevx,int prevy,int co[186][3],int c){
	if(dp[prevx][prevy])return dp[prevx][prevy];
	else for(int i=0;i<c;i++){
		if(prevx>co[i][0]&&prevy>co[i][1])
		dp[prevx][prevy]=max(dp[prevx][prevy],co[i][2]+solve(co[i][0],co[i][1],co,c));
	}
	return dp[prevx][prevy];
}
int main(){
	int n;
	scanf("%d",&n);
	while(n!=0){
		int i,coun[186][3],j,c=0,x,y,z,mx=0,my=0;
		for(i=0;i<n;i++){
			scanf("%d %d %d",&x,&y,&z);
			coun[c][0]=x,coun[c][1]=y,coun[c][2]=z;
			c++;
			coun[c][0]=x,coun[c][1]=z,coun[c][2]=y;
			c++;
			coun[c][0]=y,coun[c][1]=x,coun[c][2]=z;
			c++;
			coun[c][0]=y,coun[c][1]=z,coun[c][2]=x;
			c++;
			coun[c][0]=z,coun[c][1]=y,coun[c][2]=x;
			c++;
			coun[c][0]=z,coun[c][1]=x,coun[c][2]=y;
			c++;
			mx=max(max(mx,x),max(y,z))+1;
		}
		for(i=0;i<=mx;i++)
			for(j=0;j<=mx;j++)dp[i][j]=0;
		printf("%d\n",solve(mx,mx,coun,c));

scanf("%d",&n);

	}
}