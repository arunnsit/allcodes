#include<stdio.h>
#include<algorithm>
struct nod{
	int a;
	int b;

};
bool cmp(nod a, nod b){
	return a.a<b.a;
}
using namespace std;
nod node[100009];
int main(){
	int n,i,j;
    scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&node[i].a,&node[i].b);
	}
	sort(node,node+n,cmp);
	int prev,voun=0;
	prev=node[0].b;
	for(i=1;i<n;i++){
		if(node[i].b<prev)voun++;
		else{
			prev=node[i].b;
		}
	}
	printf("%d\n",voun);


}