#include<stdio.h>
#include<string.h>
using namespace std;
float dp[1002][1002]={0};
float sum[1002][1002]={0};
int a[1002]={0};
int main()
{
	int t,n,i,j,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);

		for(i=1;i<=n;i++)
			for(size=1;size<=n;size++)
			{
				if(A[i]==-1)
				{
					dp[i][size]=0.5*sum[x][size-1];
				}	
				
			}





	}

}
