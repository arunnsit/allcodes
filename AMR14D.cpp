#include<stdio.h>
int main()
{
	int t,n,i,j,k;
	scanf("%d",&t);
    while(t--)
    {
    	scanf("%d",&n);
    	int tmp,c=0;
    	int a[1004]={0};
    	for(i=0;i<n;i++){
    		scanf("%d",&tmp);
    		a[tmp]++;
    		if(a[tmp]>1)c=1;
    	}
    	if(c)printf("NO\n");
    	else printf("YES\n");

    }

}