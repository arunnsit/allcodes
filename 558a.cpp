#include<stdio.h>
#include<algorithm>
struct node {
	int x;
	int y;

};
bool cmp(node a, node b){
	return a.x<b.x;
}
int main(){
	int n,p1,p2,b,x,y,i;
	node a[102];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a[i].x,&a[i].y);
	}
	std::sort(a,a+n,cmp);
	for(i=0;i<n;i++){
		if(a[i].x>0)break;
	}
	b=i;
	long long int sol=0;
	if(n-b<=b){
		int m=0;
		for(i=b;i<n;i++){sol+=a[i].y;m++;}
	    for(i=b-1;i>=0&&i>=b-m-1;i--){
	    	sol+=a[i].y;
	    }

	}
	else{
		int m=b;
		for(i=0;i<b;i++){sol+=a[i].y;}
	    for(i=b;i<=2*b&&i<n;i++){
	    	sol+=a[i].y;
	    }

	}
	printf("%I64d\n",sol);





}