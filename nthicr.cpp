#include<stdio.h>
int main(){
	int t;
	register unsigned int m,p,e,n;
	double b[4];
	double sol=0,fsol=0;
	scanf("%d %d %d %d %d %lf %lf %lf %lf",&t,&n,&p,&m,&e,&b[0],&b[1],&b[2],&b[3]);
	b[0]=-b[0];
	while(t--){
		n=(n*p)%m+e;
		sol=(((n-3)*(n-4)*(1/b[0]+1/b[1]))+(n-3)*1/b[3]-(n-4)*1/b[2]);
		fsol+=1/sol;
	}
	printf("%lf\n",fsol);
	return 0;

}