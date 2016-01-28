#include<stdio.h>
void findmin(int x,int curr[40])
{
	int y=x/9,z=x%9,i,j;
	j=0;
	if(z!=0)curr[39-y]=z,j=1;
	for(i=0;i<y;i++)curr[40-i-1]=9;
}

int main()
{
	int i,j=0,k,l,n,b[400],prev[40],curr[40];
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&b[i]);
	findmin(b[0],curr);
	for(i=0;i<40;i++)if(curr[i]!=0){
        j=i;
		break;
	}
	for(i=j;i<40;i++)printf("%d",curr[i]);
	printf("\n");
	for(k=1;k<n;k++)
	{ 


	}	
}