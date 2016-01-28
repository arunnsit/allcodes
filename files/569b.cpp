#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	int val;
	int pos;

};
bool cmp(node a,node b){
	return a.val<b.val;
}
node a[100009];
int c[100009]={0};
int d[100009]={0};
int main(){
	int n,i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i].val);
		a[i].pos=i;
		d[a[i].val]++;
	}
	i=0;j=1;
	while(i<n&&j<=n){
		if(a[i].val<=n&&((d[a[i].val]>1&&!c[a[i].val])||d[a[i].val]==1)){
			printf("%d ",a[i].val);
            c[a[i].val]=1;
			}
		else{
			while(d[j]!=0&&j<=n){
				j++;
			}
			printf("%d ",j);
			j++;
		}
		i++;

	}
    printf("\n");



}