#include<stdio.h>
char a[100005],b[100005];
int main(){
	scanf("%s",a);
	scanf("%s",b);
	int i,coun=0,nc=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]==b[i])
			{
				coun++;
			}
			else nc++;	
	}
	if(nc%2!=0)printf("impossible\n");
	else{
		int prev=0;
		for(i=0;a[i]!='\0';i++){
			if(a[i]==b[i])printf("%d",a[i]-'0');
			else{
				if(prev==0)
				printf("%d",a[i]-'0');
			else printf("%d",b[i]-'0');
			prev++;
			prev=prev%2;
			}
		}
		printf("\n");
	}

}