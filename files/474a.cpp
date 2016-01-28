#include<stdio.h>
int main(){
	char a[3][20]={"qwertyuiop","asdfghjkl;","zxcvbnm,./"};
    char b[2],c[104];
    scanf("%s %s",b,c);
    int i,j,k;
    for(k=0;c[k]!='\0';k++)
    for(i=0;i<3;i++){
    	for(j=0;j<10;j++){
    		if(a[i][j]==c[k]&&b[0]=='R')printf("%c",a[i][j-1]);
    		if(a[i][j]==c[k]&&b[0]=='L')printf("%c",a[i][j+1]);

    	}
    }
}