#include<stdio.h>
#include<string.h>
int main(){
	char a[1000],b[1000];int i,j,t;
    scanf("%d",&t);
    while(t--){

    	scanf("%s %s",a,b);

    	for(i=0;a[i]!='\0';i++){
    		if((a[i]==b[i])||a[i]=='?'||b[i]=='?'){}
    		else break;
    	}
    	if(i==strlen(a)){printf("YES\n");}
    	else printf("NO\n");
    }
}