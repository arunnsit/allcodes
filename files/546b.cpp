#include<stdio.h>
#include<algorithm>
using namespace std;
int a[3009];
int main(){
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	sort(a,a+n);
    int s=0;
    for(i=1;i<n;i++)if(a[i]<=a[i-1]){
    	s+=a[i-1]-a[i]+1;
    	a[i]=a[i-1]+1;
    }
    printf("%d\n",s);
		
}