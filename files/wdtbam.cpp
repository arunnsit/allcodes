#include<stdio.h>
int main(){
	int t,n;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		char a[1003],b[1003];
		int w[1003];
		scanf("%s %s",a,b);
		int i,j,k,s=0,x=0;
		for(i=0;i<n;i++)if(a[i]==b[i])x++;
		for(i=0;i<=n;i++)scanf("%d",&w[i]);
		if(x==n)	
		s=w[n];
		else 	for(i=0;i<=x;i++)s=s>w[i]?s:w[i];
		printf("%d\n",s);	
	}
}