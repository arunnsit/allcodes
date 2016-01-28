#include<stdio.h>
#include<string.h>
double a[102][102][102]={0};
int main(){
	int t,n,k,c,m,o,p,i,j,l,r;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&n,&c,&k);
		for(j=0;j<n;j++)
		for(i=0;i<=k;i++)
		for(p=0;p<c;p++)a[i][j][p]=0;	
        for(i=0;i<n;i++)a[0][i][1]=1;
		for(i=1;i<=k;i++)
		{
			scanf("%d %d",&l,&r);
			l--;
			r--;
			for(j=0;j<n;j++)
				for(p=0;p<c;p++){
					if(j>=l&&j<=r){
                        for(m=0;m<c;m++)
						a[i][j][(p*m)%c]+=a[i-1][j][p]/(2*c);
					    a[i][j][p]+=a[i-1][j][p]/2;
					}
					else{
						a[i][j][p]+=a[i-1][j][p];
					}
				}
		}
		double s=0;
		for(j=0;j<n;j++)
		for(i=0;i<c;i++)s+=i*a[k][j][i];
		printf("%lf\n",s);	
	}
	return 0;

}