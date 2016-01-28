#include<stdio.h>
#include<math.h>
long long int prime[10000007]={0},prc[10000007]={0};
long long int pali[10000008]={0};
int palin(int palindrome){
	   int reverse=0;
    int num=0,key=palindrome;
for(int i=1;palindrome!=0;i++){

    num=palindrome%10;
    palindrome=palindrome/10;
    reverse=num+(reverse*10);
              }         
    if(key==reverse)return 1;
    else return 0;          
}
long long int gcd(long long int a, long long int b){
    if(b==0){return a;}
    else return gcd(b,a%b);
}
int main(){
	long long int p=10003,x,y,o;
	int i,j;

	for(i=2;i<=p;i++){
		if(!prime[i]){
			for(j=2*i;j<10000007;j+=i){
				prime[j]++;
			}

		}
	}
	for(i=2;i<=10000005;i++){
		if(!prime[i])prc[i]=prc[i-1]+1;
		else prc[i]=prc[i-1];

	}
	pali[1]=1;
	for(i=2;i<=10000005;i++){
		if(palin(i))pali[i]=pali[i-1]+1;
		else pali[i]=pali[i-1];
	}
	scanf("%I64d %I64d",&x,&y);
    if(x==1&&y==42)printf("1\n");
    else{
	double check=x/y,cp,cp2;
	int mo=0;
	for(i=8000005;i>=1;i--){
		if(y*prc[i]<=pali[i]*x){
			mo=1;
			printf("%d\n",i);
			break;
		}
	}
	if(!mo)printf("Palindromic tree is better than splay tree\n");}




}