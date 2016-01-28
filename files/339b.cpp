#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	long long int n,m,i,j,c=0,tmp,prev=1;
	scanf("%I64d %I64d",&n,&m);
	while(m--){
		scanf("%I64d",&tmp);
		if(tmp>=prev)c+=tmp-prev;
		else c+=n-prev+tmp;
		prev=tmp;
	}
	printf("%I64d\n",c);
}