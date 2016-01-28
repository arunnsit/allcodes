#include<stdio.h>
long long int gcd(int x,int y)
{if (y==0){return x;}else return gcd(y,x%y);}
long long int a[100009],b[100009];
int main(){
	long long int n;
	scanf("%lld",&n);
	int i,gc;

	for(i=0;i<n;i++)scanf("%lld",&a[i]);
    for(i=1;i<n;i++)b[i-1]=a[i]-a[i-1];
    gc=b[0];
    for(i=1;i<n-1;i++){
       gc=gcd(b[i],gc);
    }
    long long int s=0;
    for(i=0;i<n-1;i++){
          s+=b[i]/gc-1;
    }
    printf("%lld\n",s);

}