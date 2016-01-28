#include<stdio.h>
int a[200009],l[200009]={0},r[200009]={0};
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)scanf("%d",&a[i]);
    for(i=1;i<=n;i++)if(a[i]=='1')r[i]=r[i-1]+1;
    	else r[i]=r[i-1];
    for(i=n;i>=1;i--)if	(a[i]=='0')l[i]=l[i+1]+1;
    	else l[i]=l[i+1];
    

}