#include<stdio.h>
#include<algorithm>
struct node{
long long 	int x;
long long 	int h;
};

using namespace std;
node a[100005];
int main(){
	long long int n,i,j,c,prev;
	scanf("%I64d",&n);
	c=n>2?2:n;
	for(i=1;i<=n;i++)scanf("%I64d %I64d",&a[i].x,&a[i].h);
	prev=a[n].x;	
	for(i=n-1;i>=2;i--){
		if(a[i].h+a[i].x<prev){
			//printf("left\n");
			c++;
		}
		else if(a[i].x-a[i].h>a[i-1].x){
			prev=a[i].x-a[i].h-1;
			//printf("right\n");
			c++;
		}
		else prev=a[i].x;
	}
	printf("%I64d\n",c);
}