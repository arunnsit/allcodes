#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	long long int mo,fr; 
};
node a[100009];
bool cmp(node a,node b){
	return a.mo<b.mo;
}
int main(){
	long long int n,i,j,k,d;

	scanf("%I64d %I64d",&n,&d);

    for(i=0;i<n;i++)scanf("%I64d %I64d",&a[i].mo,&a[i].fr);
    sort(a,a+n,cmp);
    long long int c=0,l=0,x=a[0].mo,p=0,q=0;
    
    while(q!=n)
    {
    	while(a[q].mo-a[p].mo<d&&q!=n){
    		l+=a[q].fr;
    		q++;
    		c=max(l,c);
    	}
    	if(q==n)break;
    	while(a[q].mo-a[p].mo>=d){
    		l-=a[p].fr;
    		p++;
    	}

    }
    printf("%I64d\n",c);
}