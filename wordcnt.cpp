#include<stdio.h>
char a[30000];
int main(){
int t,i;
scanf("%d",&t);
while(t--){
	gets(a);
	int prev=0,cur=0,status=0,l=0,lp=0,ma=0,le[30]={0},c=0;
	for(i=0;a[i]!='\0';i++){
		if(a[i]<=123&&a[i]>=97){
            l++;
		}
		else if(a[i+1]<=123&&a[i+1]>=97){
           if(!status ){
           	status=1;
           	lp=l;
           }
           if(lp==l){
            	c++;
            }
            else{
            	lp=l;
                ma=ma>c?ma:c;
                c=1;
            }
			l=0;
		}
		//printf("c:%d",c);
	}
	ma=ma>c?ma:c;
	if(l!=0){
		if(lp==l){
               ma=ma>c+1?ma:c+1;
		}
		else{
			ma=ma>1?ma:1;
		}
	}
   
	printf("%d\n",ma);	

}

}