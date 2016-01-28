#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100009][2];
int main()
{
	int n,i,j,k,s=0,curr=1000;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d %d",&a[i][0],&a[i][1]);
    for(i=0;i<n;i++)
    {
    	curr=min(curr,a[i][1]);
    	s+=curr*a[i][0];
    }
    printf("%d\n",s);
}