#include<stdio.h>
char a[100009];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		scanf("%s",a);
		int i,b[27]={0},s=0;
		for(i=0;a[i]!='\0';i++){
			b[a[i]-97]++;
		}
		for(i=0;i<27;i++)if(b[i])s++;
			if(s%2!=0)printf("Counter Terrorist\n");
		else printf("Terrorist\n");

	}
}