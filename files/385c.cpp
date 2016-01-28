#include<stdio.h>
#include<math.h>
int a[10000004]={0};
int primes[10000004]={0};
long long int con[10000004]={0};
int main(){
	int i,j,k,ma=sqrt(10000006),n,temp,m;
	for(i=2;i<ma;i++)
	{
		if(!primes[i]){
			for(j=2*i;j<10000002;j+=i){
				primes[j]++;
			}
		}
	}
	scanf("%d",&n);
	while(n--){
		scanf("%d",&temp);
		a[temp]++;
	}
	for(i=2;i<10000002;i++){
		int x=0;
		if(!primes[i]){
			for(j=i;j<10000002;j+=i){
				x+=a[j];

			}
									//if(i<15)printf("i:%d %d\n",i,x);

		}
		con[i]=con[i-1]+x;
	}
	scanf("%d",&m);
	while(m--){
		scanf("%d %d",&i,&j);
		j=j>10000001?10000001:j;
		if(i>10000001)printf("0\n");

		else printf("%I64d\n",con[j]-con[i-1]);
	}
}
