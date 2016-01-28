#include<stdio.h>
int main(){
	int i;
	for(i=1;i<50;i++)
		printf("%d %d %d\n",i,i+1,(i)^(i+1));

}