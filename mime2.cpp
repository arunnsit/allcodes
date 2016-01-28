//author:arunnsit
//calkwalk
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
		int n,q,i,j,k,f;
		scanf("%d %d",&n,&q);
  char a[100][11],b[100][51],c[100][51],str4[51];
		for(i=0;i<n;i++)
		{
			scanf("%s %s",a[i],b[i]);
		}
		for(i=0;i<q;i++)
		{
			f=0;
			scanf("%s",c[i]);
			j=strlen(c[i])-1;
			k=0;
			while(j>=0 && c[i][j]!='.')
			{
			 j--;
			}
		 if(j>=0)
		 {
				j++;
				for(k=0;j<strlen(c[i]);k++,j++)
				 str4[k]=c[i][j];
			 str4[k]='\0';
			 for(k=0;k<n;k++)
			 {
					if(strcmp(str4,a[k])==0)
				 {
						printf("%s \n",b[k]);
						f=1;
						break;
					}
				}
				if(f!=1)
				 printf("unknown \n");
			}
			else
			 printf("unknown \n");
		}
	return 0;
}
