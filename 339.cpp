#include<stdio.h>
int main(){
	char a[200];
	int b[3]={0},i,j;
	scanf("%s",a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='1')b[0]++;
		if(a[i]=='2')b[1]++;
		if(a[i]=='3')b[2]++;
	}
	while(b[0]){
		printf("1");
		b[0]--;
		if(b[0]==0&&b[1]==0&&b[2]==0){}
		else printf("+"); 	
	}
	while(b[1]){
		printf("2");
		b[1]--;
		if(b[1]==0&&b[2]==0){}
		else printf("+"); 	
	}
	while(b[2]){
		printf("3");
		b[2]--;
		if(b[2]==0){}
		else printf("+"); 	
	}printf("\n");

}