#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
bool ispalin(char a[15],int l)
{
	for(int i=0;i<l/2;i++)if(a[i]!=a[l-i-1])return false;
		return true;

}
int main()
{
	char a[15],b[15];
	scanf("%s",a);
	int i,j,k,l,e;
	l=strlen(a);
	if(l==1){
		printf("%s%s\n",a,a);return 0;
	}
    else
    {   
        for(e=1;e<=26;e++)
    	for(i=0;i<=l;i++)
    	{   int x=0;

    		for(j=0;j<i;j++){
    			b[j]=a[j];
    		}
    		b[i]=e+96;
    		for(j=i+1;j<=l+1;j++){
    			b[j]=a[j-1];
    		}
    		//printf("%s\n",b);
    		if(ispalin(b,l+1)){printf("%s\n",b);return 0;}

    	}

    }
    printf("NA\n");
return 0;
	
}