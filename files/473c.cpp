#include<stdio.h>
#include<algorithm>
using namespace std;
long long int a[500000],b[500000];
int main(){
	long long int x,y,i,j,n,m;
	scanf("%I64d",&n);
	for (int i = 0; i < n; ++i)
	{
		scanf("%I64d",&a[i]);
		/* code */
	}
	scanf("%I64d",&m);
	for (int i = 0; i < m; ++i)
	{
		scanf("%I64d",&b[i]);
		/* code */
	}
	sort(a,a+n);
	sort(b,b+m);
	i=0,j=0;
	long long int sol=3*n-3*m,p=3*n,q=3*m;
	while(i<n&&j<m){
		if(a[i]>b[j]){
			j++;
			
		}
		else if(b[j]>a[i]){
			i++;
		}
		else {
			i++;
			j++;
		}
		//printf("%d %d\n",i,j);
		if(2*i+3*(n-i)-2*j-3*(m-j)>sol){
				sol=2*i+3*(n-i)-2*j-3*(m-j);
				p=2*i+3*(n-i);
				q=2*j+3*(m-j);
			}
		else if(2*i+3*(n-i)-2*j-3*(m-j)==sol&&p<2*i+3*(n-i)){
			sol=2*i+3*(n-i)-2*j-3*(m-j);
				p=2*i+3*(n-i);
				q=2*j+3*(m-j);

		}	
	}
	if(sol<2*n-2*m){p=2*n;q=2*m;}
	else if(sol==2*n-2*m&&p<2*n){
		p=2*n;q=2*m;
	}

	printf("%I64d:%I64d\n",p,q);
}