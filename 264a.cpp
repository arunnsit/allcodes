#include<stdio.h>
#include<string.h>
int a[1000009];
char b[1000009];
;int main()
{
	int x=1,y,l,i;
	scanf("%s",b);
	y=l=strlen(b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]=='r'){
			a[x]=i+1;
			x++;
		}
		else {
			a[y]=i+1;
			y--;

		}
	}
	for(i=1;i<=l;i++)printf("%d\n",a[i]);

}