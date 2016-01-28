#include<stdio.h>
char a[1000009];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		int i;
		long long int c=0,s=0;
		for(i=0;a[i]!='\0';i++){
			if(a[i]=='X'){
				c=0;
			}
			else {
				c++;
				s+=c;
			}
		}
		printf("%lld\n",s);

	}
}