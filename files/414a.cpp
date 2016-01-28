#include<stdio.h>
#include<math.h>
int stor[10000008]={0};
int main(){
	int n,k,i,j,p=sqrt(10000000);
	scanf("%d %d",&n,&k);
	if(k<n/2||(n==1&&k!=0))printf("-1\n");
	else if(k==0&&n==1)printf("1\n");
	else{
		int com=0,req=0,swit=0,st=0;
		if(n%2!=0){
			swit=1;
			n--;
		}
		n=n/2;
		printf("%d %d ",(k-n+1),2*(k-n+1));
        int p=n;
		for (int i = 1; i < p; ++i)
		{if(2*i+1!=k-n+1&&k-n+1!=2*i+2&&2*(k-n+1)!=2*i+1&&2*(k-n+1)!=2*i+2)
			printf("%d %d ",2*i+1,2*i+2);
		else {p++;}	
		}


		if(swit){
			printf("100003");
		}
		printf("\n");
	}



}