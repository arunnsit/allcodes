#include<stdio.h>
#include<string.h>
int prefix[1000009],rprefix[1000009];
char a[1000009];
void build_lps()
{   prefix[0]=0;
	int j=0,i;
	for(i=1;a[i]!='\0';i++)
	{
		if(a[j]==a[i])
		{
			prefix[i]=prefix[i-1]+1;
			j++;
		}
		else
		{
			while(j!=0&&a[j]!=a[i])
			{
				j=prefix[j-1];
			}
			if(a[j]==a[i])
			{prefix[i]=j+1;
				j++;}
		    else prefix[i]=0;
		}

	}
}
void build_rlps()
{  
	int j=strlen(a)-1,i=j-1,l;
	l=strlen(a)-1;
	rprefix[l]=0;
	for(i=j-1;i>=0;i--)
	{
		if(a[j]==a[i])
		{
			rprefix[i]=rprefix[i+1]+1;
			j--;
		}
		else
		{
			while(j!=l&&a[j]!=a[i])
			{
				j=l-rprefix[j+1];
			}
			if(a[j]==a[i])
			{rprefix[i]=l-j+1;
				j--;}
		    else rprefix[i]=0;
		}
		//printf("%d %d %d\n",i,j,rprefix[i]);

	}
}

int has[1000009]={0};
int main()
{   int i,max=0;
	scanf("%s",a);
	build_lps();
		build_rlps();


	for(i=0;a[i]!='\0';i++)
		{  
			if(prefix[i]==rprefix[i-prefix[i]+1])max=max>prefix[i]?max:prefix[i];
			//printf("%d %d\n",prefix[i],rprefix[i]);
		}
		 if(max>0)
		{for(i=0;i<max;i++)printf("%c",a[i]);
			printf("\n");}
			else printf("Just a legend\n");



}