#include<stdio.h>
#include<string.h>

char a[100090];
int c[100090]={0},f[100090]={0};
int main(){
	int i,x=0,y=0,m=0,n=0,l;
	scanf("%s",a);
 l=strlen(a);
for(i=l-1;i>=0;i--)if(a[i]=='B'&&a[i-1]=='A')c[i]=c[i+1]+1;
	else c[i]=c[i+1];
for(i=0;i<l;i++)if(a[i]=='A'&&a[i+1]=='B')f[i+1]=f[i]+1;
	else f[i+1]=f[i];
for(i=0;a[i]!='\0';i++)if(a[i]=='B'&&a[i+1]=='A'&&(c[i+3]||(i>=2&&f[i-1]))){
	 y++;
}	


if(y)
	printf("YES\n");
else printf("NO\n");
}