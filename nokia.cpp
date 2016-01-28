#include<stdio.h>
#include<algorithm>
using namespace std;
int dp[39][39]={0};
int minsol(int n){
	int x,y;
	if(n<=0)return 0;
	if(n%2==0){
		x=n/2-1;
		y=n/2;
	}
	else {
		x=n/2;
		y=n/2;}
	return n+1+minsol(y)+minsol(x);	

}
int main(){
	int t,n,m,i,j,p;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d",&n,&m);
		j=(n*(n+3))/2;
		p=minsol(n);

      if(m<p)printf("-1\n");
      else if(m>=p&&m<=j)printf("0\n");
	  else printf("%d\n",m-j);			
	}
}