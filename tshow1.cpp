#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	long long int n;
	scanf("%lld",&n);
	int i=0,j,a[100];
	long long int c, x=1,s=0,b[100]={0};
	while(s<n){
		x*=2;
		s+=x;
		i++;
        b[i]=s;
	}
    
    for(j=i;j>0;j--){
    	
    	if(n-b[j-1]<=(b[j]-b[j-1])/2){a[j]=5;n-=x/2;}
    	else {a[j]=6;
    	n-=x;
    }
       //	printf("x:%lld\n",x);
x/=2;
    }






	while(i>0){
		printf("%d",a[i]);
		i--;
	}
	printf("\n");


}

}