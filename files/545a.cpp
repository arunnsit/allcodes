#include<stdio.h>
int a[102][102]={0};
int b[102]={0},c=0;
int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)scanf("%d",&a[i][j]);

	for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++){if(a[i][j]==1||a[i][j]==3)break;}
			if(j==n)b[c++]=i+1;
		}
		printf("%d\n",c);
		for(i=0;i<c;i++)printf("%d ",b[i]);
		printf("\n");			

}