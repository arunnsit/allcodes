#include<stdio.h>
#include<vector>
using namespace std;
vector<int>a[1000009];
int main()
{   
	int t ,i,j,k;
	for(i=2;i<=1000005;i++)
		if(!a[i].size()){
			for(j=i;j<=1000005;j+=i)
				a[j].push_back(i);
		}

	scanf("%d",&t);
	while(t--){
		int c[1000002]={0},n,tmp,coun=0,x,y;
		scanf("%d",&n);

		for(i=1;i<=n;i++)
		{
			scanf("%d",&tmp);
			for(j=0;j<a[tmp].size();j++)
			{   x=tmp;
				y=0;
				while(x%a[tmp][j]==0){
					y++;
					x/=a[tmp][j];
				}
				c[a[tmp][j]]=c[a[tmp][j]]>y?c[a[tmp][j]]:y;
			}
		}
		for(i=2;i<=1000000;i++)if(c[i])coun+=c[i];
			printf("%d\n",coun);




	}
}