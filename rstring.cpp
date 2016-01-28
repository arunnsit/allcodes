#include<stdio.h>
#include<string.h>
char a[1000009],b[1000009];
int main(){
	int l;
	scanf("%s",a);
	l=strlen(a);
	int i=0,j=0,k=0,c=-1;
	for(i=1;a[i]!='\0';i++){
		if(a[i]==a[k]){k++;}
		else {k=0;j=i;}
		if(k==j+1){c=j+1;break;}     
	}
	if(c!=-1&&l>1){
		printf("YES\n%d\n",c);
	}
	else printf("NO\n");
}