#include<stdio.h>
int main(){
	int m,n,i,c,o;
	scanf("%d %d",&n,&m);
	if(n==1&&m==1)printf("1\n");
	else if(n-m>m-1)printf("%d\n",m+1);
	else printf("%d\n",m-1);

}