#include<stdio.h>
 long long int a[40]={0};
long long int solve(int n){
	if(n<0)return 0;
	if(n==0)return 1;
	if(n==2)return 3;
	if(a[n])return a[n];
	a[n]+=3*solve(n-2);
	for(int i=4;i<=n;i+=2){
		a[n]+=2*solve(n-i);
	}
	return a[n];
}
int main(){
 int i,j,k;
 a[0]=1;
 a[2]=3;
 solve(32);
 scanf("%d",&i);
 while(i!=-1){
 	printf("%lld\n",a[i]);
 	 scanf("%d",&i);


 }



 }