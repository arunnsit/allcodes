#include<stdio.h>
#include<algorithm>
using namespace std;
int dp[510][510]={0},arr[510][510]={0},p[510][510]={0};
int c,r,i,j,k;

int main(){
	int t,x;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&c,&r);
		for(i=1;i<=c;i++)
			for(j=1;j<=r;j++){
				scanf("%d",&arr[i][j]);
			}
	        arr[c][r]=1;
			for (i=c-1;i>=1;i--){
                        arr[i][r]=arr[i+1][r]-arr[i][r];
                        if (arr[i][r]<=0)arr[i][r]=1;
                }
 
                for (i=r-1;i>=1;i--){
                        arr[c][i] = arr[c][i+1]-arr[c][i];
                        if (arr[c][i]<=0)arr[c][i]=1;
                }
 
		for(i=c-1;i>=1;i--)
			for(j=r-1;j>=1;j--){
				arr[i][j]=min(arr[i][j+1],arr[i+1][j])-arr[i][j];
				if(arr[i][j]<=0)arr[i][j]=1;
			}	
		
	printf("%d\n",arr[1][1]);
	}
}