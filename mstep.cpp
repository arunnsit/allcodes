#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int t,i,j,n;
	scanf("%d",&t);
	while(t--){
		int x,y,a[502*502][2]={0};
		long long int s=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++){
							scanf("%d",&x);
							a[x][0]=i;
							a[x][1]=j;
			}
		for(i=2;i<=n*n;i++)s+=abs(a[i-1][0]-a[i][0])+abs(a[i-1][1]-a[i][1]);
		printf("%lld\n",s);
	}
}