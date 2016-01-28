#include <string.h>
#include <string>
#include<stdio.h>
using namespace std;
const int N=2005;
int a[2005][2005];
void zero(int x, int y)
{
	for(int i=0;i<=x;i++)
		for(int j=0;j<=y;j++)
			a[i][j]=0;
}

int main()
{
	char s1[2005],s2[2005];
	int t,k,n,m,i,j,b,c,d;
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
			scanf("%s %s",&s1,&s2);
		n=strlen(s1);
		m=strlen(s2);
		zero(n,m);
		for(i=0;i<=n;i++)
			a[i][0]=i;
		for(i=0;i<=m;i++)
			a[0][i]=i;

		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
			{
				if(s1[i-1]==s2[j-1])
					a[i][j]=min(min(a[i-1][j]+1,a[i][j-1]+1),a[i-1][j-1]);
				else
					a[i][j]=min(min(a[i-1][j]+1,a[i][j-1]+1),a[i-1][j-1]+1);

			}
		printf("%d\n",a[n][m]);

	}


	return 0;
}
