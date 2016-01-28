#include<stdio.h>
char a[100009];
int main()
{
	int t,i,j,k;
	scanf("%d",&t);
	while(t--)
	{   long long int sum[100009]={0},mod=1000000007;
        int has[1000]={0};
		scanf("%s",a);
		for(i=0;a[i]!='\0';i++)
		{
			sum[i+1]=(sum[i]-sum[has[a[i]]-1])+sum[i];
			if(has[a[i]]==0)sum[i+1]++;
			has[a[i]]=i+1;
			sum[i+1]%=mod;
			if(sum[i+1]>=0)sum[i+1]%=mod;
            else sum[i+1]+=mod;
		}
	
	printf("%lld\n",(sum[i]+1)%mod);
	}
}