#include<stdio.h>
char a[1000],b[1000];
int main(){
	int i;
	scanf("%s %s",a,b);
	for(i=0;a[i]!='\0';i++)if(a[i]==b[i])a[i]='0';
		else a[i]='1';
	printf("%s\n",a);
}