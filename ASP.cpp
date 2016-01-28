#include<stdio.h>
#include<string.h>
int a[1000009],b[1000009]={0};
int main()
{
	int t,n,i,j,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		memset(a,0,sizeof(a[0])*(n+2));
		int tmp;
		memset(b,0,sizeof(b[0])*(n+2));
		a[n+1]=1000000009;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		for(i=1;i<=n;i++)
		{
			if(b[i]==0&&a[i]>a[i+1]){
				tmp=a[i];
				a[i]=a[i+1];
                a[i+1]=tmp;
                b[i+1]=1;
			}
		}
		for(i=2;i<=n;i++)if(a[i]<=a[i-1])break;
			if(i==n+1)printf("YES\n");
		else printf("NO\n");
	}


}