#include<stdio.h>
#include<algorithm>
using namespace std;
long long int a[1000009],b[1000009];
int main(){
	long long int n,x,i;
	scanf("%lld %lld",&n,&x);
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    sort(a,a+n);
    for(i=0;i<n;i++){
    	if(x-(a[i]+1)/2<0)break;
    	x-=(a[i]+1)/2;
    	b[i]=(a[i]+1)/2;
    }
    for(i=0;i<n;i++){
    	if(x-a[i]+b[i]<0)break;
    	x-=a[i]-b[i];
    	b[i]=a[i];
    }
    int f=0,s=0;
    for(i=0;i<n;i++)if(a[i]==b[i])s++;
    	else if(b[i]<(a[i]+1)/2)f++;
    printf("%d %d\n",f,s);
}