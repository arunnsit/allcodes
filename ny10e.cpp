#include<stdio.h>
long long int a[1000][10]={0};
void precomp(){
	int i=0,j;
	long long int s=0;
	for(i=0;i<10;i++)a[0][i]=1;
	for(i=1;i<=1000;i++){
		s=0;
		for(j=9;j>=0;j--){
			s+=a[i-1][j];
			a[i][j]=s;
		}

	}
}
int main(){
	int t,n,k,i,j;
	long long int s=0;
precomp();
scanf("%d",&t);
while(t--){
    s=0;
	scanf("%d %d",&n,&k);
	for(j=9;j>=0;j--)s+=a[k-1][j];
		printf("%d %lld\n",n,s);
}
}