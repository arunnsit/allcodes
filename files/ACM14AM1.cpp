#include<stdio.h>
int main()
{
	int n,k,p,m,tmp,t;
	scanf("%d",&t);
	while(t--){
		int s=0;
	scanf("%d %d",&n,&p);
	while(n--)
	{scanf("%d",&tmp);
if(tmp>=p)s++;

	}
	printf("%d\n",s);
}
}