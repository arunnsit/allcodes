#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int x,y,z,i,j,k,sol=0;
		scanf("%lld %lld",&x,&y);
        
        for(i=2;i<=y;i*=2)
        	for(j=1;j*i<=y;j*=3)
        		if(j*i<=y&&j*i>=x)sol++;
        if(x==1)printf("%lld\n",sol+1);

        else printf("%lld\n",sol);	
	}
}