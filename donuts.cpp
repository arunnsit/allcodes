#include<stdio.h>
#include<algorithm>
using namespace std;
int a[2*10009];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		long long int n,s=0,tmp,o=0,non=0,m,i,j,k;
		scanf("%lld %lld",&n,&m);
		for(i=0;i<m;i++){
			scanf("%lld",&tmp);
			if(tmp==1)o++;
			else non++;
			a[i]=tmp;
		}
		
		if(o==non)printf("%lld\n",o);
		else if(o<non){
			sort(a,a+m);
			i=0;j=m-1;
			int cuts=0;
			while(i<j){
				if(i+a[i]<=j){
					j-=a[i];
					cuts+=a[i];
				}
				else{
					cuts+=j-i;
					break;
				}
				//printf("%d %lld %lld\n",cuts,i,j);
				i++;
			}
			printf("%d\n",cuts);
		}

		else {
			printf("%lld\n",non-1+(o-non+2)/2);
		}
	}
}