#include<stdio.h>
char a[1000009],b[1000009];
int main(){
	int t,nt;
	scanf("%d",&t);
	nt=t;
	while(t--){
		scanf("%s %s",a,b);
		int i;
		long long int c1=0,s=0,c2=0,totalswap=0,onesav=0,need=0,faltu=0;
		for(i=0;a[i]!='\0';i++){
			if(a[i]==b[i]){
			}
			else if(a[i]=='?'&&b[i]=='1'){
				faltu++;

			}
			else if(a[i]=='?')
			{
				totalswap++;
			}
			else if(a[i]=='1'){
				onesav++;
			}
			else 
			{
				need++;

			}

		}
		printf("Case %d: %lld\n",nt-t,(need>=onesav)?((onesav+totalswap<need)?(-1):(onesav+2*(need-onesav)+totalswap-need+onesav+faltu)):(onesav-need>faltu)?-1:need+2*(onesav-need)+faltu+need-onesav+totalswap);

	}
}