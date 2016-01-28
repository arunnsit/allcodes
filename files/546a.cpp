#include<stdio.h>
int main(){
	int k,n,w;
	long long int x;
	scanf("%d %d %d",&k,&n,&w);
    x=((w*(w+1))/2)*k;
    x-=n;
    if(x<0)printf("0\n");
    else printf("%I64d\n",x);
}