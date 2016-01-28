#include<stdio.h>
int main(){
	int a[105][106],b[102]={0},c,i,j,k,n,m;
	scanf("%d %d",&n,&m);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)scanf("%d",&a[i][j]);
	for(i=0;i<m;i++){
		int x=-2,xp=0;
		for(j=0;j<n;j++){
			if(x<a[i][j]){
				x=a[i][j];
				xp=j;
			}
		}
		b[xp]++;
	}
	int u=-2,o=0;
	for(i=0;i<=n;i++){
		if(u<b[i]){
			u=b[i];
			o=i;
		}
	}
	printf("%d\n",o+1);		
}