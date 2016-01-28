#include<stdio.h>
#include<algorithm>
using namespace std;
long long int x=0,y=0,a[300000],b[300000],p=0,q=0,tmp;
int main(){
	int i,j,k,n,last=-1;
	scanf("%d",&n);
	while(n--){
		scanf("%I64d",&tmp);
		if(tmp<0){
			y=(y-tmp);
			b[q]=-tmp;
			q++;
			last=1;
		}
		else if(tmp>0){
			a[p]=tmp;
			x+=tmp;
			p++;
			last=2;
		}
	}
	if(x>y)printf("first\n");
	else if(x<y)printf("second\n");
	else {
			for(i=0;i<min(p,q);i++){
				if(a[i]!=b[i])break;
			}
			if(i==p&&i==q){
				if(last==2)printf("first\n");
				else printf("second\n");
			}
			else{
				if(a[i]>b[i])printf("first\n");
	else printf("second\n");

			}

		}

	


}