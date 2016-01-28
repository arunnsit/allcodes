#include<stdio.h>
int main(){
int n,m,i;
scanf("%d %d",&n,&m);
while(n&&m){
	int j=0,l=0;
	for(i=1;i<=n;i++){
     j=(j+m)%i;
	}
	printf("%d %d %d\n",n,m,j+1);
	scanf("%d %d",&n,&m);


}


}