#include<stdio.h>
#include<string.h>
#include<unordered_map>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,k,l;
        char a[100];
        scanf("%d",&n);
        unordered_map<string,int>map[20];
        for(i=0;i<n-1;i++)
        {
        	scanf("%s",a);
        	for(j=0;a[j]!='\0';j++){
                 char b[100];
        		for(k=j;a[k]!='\0';k++){
        			b[k-j]=a[k];
        			b[k-j+1]='\0';
        			printf("%s\n",b);
        		}
        	}

        }
	}

}