#include<stdio.h>
#include<string.h>
int ston(char a[100]){
	int i,n=0,l;
	l=strlen(a);
	for(i=0;a[i]!='\0';i++){
		if(a[i]=='i'){
			if(i>0&&a[i-1]>='2'&&'9'>=a[i-1]){
				n+=a[i-1]-'0';
			}
			else{
				n++;
			}
		}
		if(a[i]=='x'){
			if(i>0&&a[i-1]>='2'&&'9'>=a[i-1]){
				n+=10*(a[i-1]-'0');
			}
			else{
				n+=10;
			}
		}
		if(a[i]=='c'){
			if(i>0&&a[i-1]>='2'&&'9'>=a[i-1]){
				n+=100*(a[i-1]-'0');
			}
			else{
				n+=100;
			}
		}
		if(a[i]=='m'){
			if(i>0&&a[i-1]>='2'&&'9'>=a[i-1]){
				n+=1000*(a[i-1]-'0');
			}
			else{
				n+=1000;
			}
		}

	}
	return n;
}
char op[100];
void ntos(int n){
	int i,x=1000,u=0,j=0;
	char bp[]={'m','c','x','i'};
	while(n){
		if(n/x>1){
			op[u++]=n/x+'0';
			op[u++]=bp[j++];
		}
		else if(n/x==1){
			op[u++]=bp[j++];

		}
		else{
			j++;
		}
		n=n%x;
		x=x/10;
	}
	op[u]='\0';

}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
	char a[100],b[100];
	int n,x;
	scanf("%s %s",a,b);
	n=ston(a);
	n+=ston(b);
	ntos(n);
	printf("%s\n",op);

}}