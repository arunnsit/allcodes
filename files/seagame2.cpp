#include<stdio.h>
int main(){
	int n,m,t;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		int i,j;
		double a[15][10009],sum[10009],pro[13],to=1,nto=0;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)scanf("%lf",&a[i][j]);
		for(i=0;i<n;i++)pro[i]=1;
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)pro[i]*=a[i][j];
        for(i=0;i<n;i++)nto+=pro[i];
        if(nto==0)to=0;
        else to=pro[0]*(1/(nto));
        	
        printf("%lf\n",to);

	}
}