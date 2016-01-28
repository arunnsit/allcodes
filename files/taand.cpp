#include<stdio.h>
int a[1000000],b[1000000];
int main(){
	int n,i,j,pos=0,sol=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(j=31;j>=0;j--){
		pos=0;
	for(i=0;i<n;i++)
	{
		if((a[i]>>j)&1)b[pos++]=a[i];
	}
	if(pos>=2){
		   n=pos;
	for(i=0;i<n;i++){
		a[i]=b[i];
	}
		sol	=((sol>>j)|1)<<j;
}
}
printf("%d\n",sol);
}