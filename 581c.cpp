#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int val,mval;
};
bool cmp(node a, node b){
	return a.mval>b.mval;
}
node a[100009];
int main(){
	int n,k,i,j,x;
	scanf("%d %d",&n,&k);
	x=k;
    for(i=0;i<n;i++){
    	scanf("%d",&a[i].val);
        a[i].mval=a[i].val%10;
    }
    sort(a,a+n,cmp);
    for(i=0;i<n;i++){
    	if(a[i].val+10-a[i].mval<=100){
    	if(x-10+a[i].mval>=0){
    	a[i].val+=10-a[i].mval;
    	x-=10-a[i].mval;
    }
        else break;}
    }
    int r=0;
    for(i=0;i<n;i++){
    	r+=a[i].val/10;
    }
    r+=x/10;
    if(r>10*n)printf("%d\n",10*n);
    else printf("%d\n",r);
}