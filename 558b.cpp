#include<stdio.h>
#include<algorithm>
using namespace std;
int a[1000006][3]={0};
int main(){
	int n,m,temp,i;
	scanf("%d",&n);
    for(i=1;i<=n;i++){
    	scanf("%d",&temp);
    	if(a[temp][0]){
    		a[temp][0]++;
    		a[temp][2]=i;
    	}
    	else {
    		a[temp][0]++;
    		a[temp][1]=i;
    		a[temp][2]=i;
    	}
    }
    int ma=0,l,r;
    for(i=0;i<=1000000;i++){
    	if(a[i][0]){
    		if(a[i][0]>ma){
    			ma=a[i][0];
    			l=a[i][1];
    			r=a[i][2];
    		}
    		else if(a[i][0]==ma&&r-l>a[i][2]-a[i][1]){
    			ma=a[i][0];
    			l=a[i][1];
    			r=a[i][2];
    		}
    	}

    }
    printf("%d %d\n",l,r);
}