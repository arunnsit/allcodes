#include<stdio.h>
int main(){
	long long int n,c,i,k,j;
	scanf("%lld",&n);
	while(n--){
		scanf("%lld",&c);
		i=0;
		j=0;
		k=c;
		while(c%5==0&&c){
			i++;
			c=c/5;
			}
        c=k;
        while(c%2==0&&c){
			j++;
			c=c/2;
			}
		i=j>i?0:i-j;	

        while(i){
        	k*=4;
        	if(i%2==0){
        		
        		i-=2;
        	}
        	else{
        		i-=1;

        	}
        }
        printf("%lld\n",k);

	}

}