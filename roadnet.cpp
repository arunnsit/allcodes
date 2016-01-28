#include<stdio.h>
	int a[202][202],n,m,t,i,j,k;
int main(){
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)scanf("%d",&a[i][j]);

	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++){
		int o=1;	
		for(k=0;k<n;k++){
			if(k!=i&&k!=j&&a[i][k]+a[k][j]==a[i][j]){
				o=0;

			}
		}
		if(o)printf("%d %d\n",i+1,j+1);
		}
		
	}		


}