#include<stdio.h>
int main()
{
	int k,store[105][105]={0},exist[105]={0},p,i,j,l,m,n,a[105]={0},paint[105]={0};
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)scanf("%d",&a[i]),exist[a[i]]++;
    for(i=100;i>=1;i--)if(exist[i])break;
    j=i;
    for(i=j-1;i>=1;i--)if(exist[i])break;
    m=i;
    int min=0;
    for(i=1;i<=100;i++)if(exist[i])break;
    min=i;	
    if(m>k||j-(min+1)/2>k)printf("NO\n");
    else {
    	printf("YES\n");
    	for(i=1;i<=min;i++)store[j][2*i-1]=store[j][2*i]=i;
    	for(i=min+1;2*min+i-min<=j;i++)store[j][2*min+i-min]=i;	
    	for(i=1;i<=m;i++)
    	{
    		if(exist[i])
    		{
    			for(p=1;p<=i;p++)store[i][p]=p;
    		}
    	}
    	for(i=0;i<n;i++)
    	{
    		for(j=1;j<=a[i];j++)printf("%d ",store[a[i]][j]);
    		printf("\n");	
    	}	



    }	
}