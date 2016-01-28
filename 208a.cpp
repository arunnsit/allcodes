#include<stdio.h>
#include<string.h>
int main(){
	char a[300],b[300];
	scanf("%s",a);
	int i,l,c=0;
	l=strlen(a);
	for(i=0;i<l;i++){
		if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B'){
			i+=2;
			if(c!=0&&b[c-1]!=' ')b[c++]=' ';
		}
		else b[c++]=a[i];
	}
	while(b[c-1]==' '){
		c--;
	}
	b[c]='\0';
	printf("%s\n",b);
}