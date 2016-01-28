#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int x;
	int y;
	int ne;
	int nw;
	int sw;
	int se;
	int no;
	int p1;
	int p2;
	int p3;
	int p4;
};
bool cmp1(node a,node b)
{
	return a.x<b.x;
}
bool cmp2(node a,node b)
{
	return a.y<b.y;
}
node a[100009];
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,i;
		scanf("%d",&n);
        for(i=0;i<n;i++){
        	scanf("%d %d",&a[i].x,&a[i].y);
        	a[i].no=i+1;
        }
        sort(a,a+n,cmp1);
        for(i=0;i<n;i++){
        	a[i].p1=i;
        	a[i].p2=n-i+1;
        }
        sort(a,a+n,cmp2);



	}

}