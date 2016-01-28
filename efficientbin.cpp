#include<stdio.h>
#include<algorithm>
using namespace std;
int a[100000];
int binary(int start,int end,int key)
{   if(start==end&&a[start]!=key)return -1;
	int mid1=(end+start)/3;
	int mid2=2*(end+start)/3;
	if(key==a[mid1])return mid1;
	if(key==a[mid2])return mid2;
	if(key<a[mid1])binary(start,mid1-1,key);
	else if(key>a[mid1]&&key<a[mid2])binary(mid1+1,mid2-1,key);
    else binary(mid2+1,end,key);
}
int main(){
	int n,i,j,x,sol;
	printf("enter n:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	sort(a,a+n);
	printf("enter key:\n");
	scanf("%d",&x);	
	sol=binary(0,n-1,x);
	if(sol==-1)printf("key not found\n");
	else printf("key found at %d\n",sol+1);




}