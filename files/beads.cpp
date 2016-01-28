#include<stdio.h>
#include<string.h>
int main(){
	int i,j,t,n,len,k;
	char str[10009];
	scanf("%d",&t);
	while(t--){
		scanf("%s",str);
int i=0,j=1,a,b,k=0,n,len;
len=strlen(str);
n=len<<1;
while(i+k < n && j+k < n){
a= (i+k >=len) ? str[i+k-len]:str[i+k];
b= (j+k >=len) ? str[j+k-len]:str[j+k];
if(a==b)
k++;
else if(a > b){
i=i+k+1;
if(i <= j)
i=j+1;
k=0;
}
else{
j=j+k+1;
if(j<=i)
j=i+1;
k=0;
}
}
i=(i>j)?j:i;
		printf("%d\n",i+1);

	}

}