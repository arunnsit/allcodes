#include<stdio.h>
#include<string.h>
char a[500009];
long long int b[500009]={0},c[500009]={0};
int main()
{
	scanf("%s",a);
	int n,i,j,k,l;

	for(i=0;a[i]!='\0';i++)if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U'||a[i]=='Y'){
		b[i+1]=b[i]+1;
	}
	else b[i+1]=b[i];
	l=strlen(a);
	for(i=1;i<=l;i++)b[i]=b[i]+b[i-1];
    double s=0;
	for(i=1;i<=l;i++){
		s=s+(double)(b[l]-b[i-1]-b[l-i])/i;
	}
	printf("%lf\n",s);	

}