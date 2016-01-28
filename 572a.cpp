#include<stdio.h>
int a[100003],b[100003];
int main(){
	int i,j,c,k,p,n,m,x,y;
	scanf("%d %d %d %d",&x,&y,&k,&m);
	for(i=0;i<x;i++)scanf("%d",&a[i]);
	for(i=0;i<y;i++)scanf("%d",&b[i]);
	if(a[k-1]<b[y-m])printf("YES\n");
	else printf("NO\n");	


}