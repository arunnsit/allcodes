#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100009];
int main(){
	int n,l=1,r=1,i,j,c=1;
	scanf("%d",&n);

	for(i=0;i<n;i++)scanf("%d",&a[i]);
    for(i=1;i<n;i++){
    	if(a[i-1]<=a[i])l++;
    	else l=1;
        c=max(c,l);

    }
    

printf("%d\n",c);
}