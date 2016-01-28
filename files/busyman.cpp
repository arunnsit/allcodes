#include<stdio.h>
#include<algorithm>
struct node{
	int a;
	int b;
}in[100002];
bool cmp(node a, node b){
	return a.b<b.b;
}
int main(){
	int n,t,i,j;
	
	scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d %d",&in[i].a,&in[i].b);
    std::sort(in,in+n,cmp);
    int coun=1,x=in[0].a,y=in[0].b;
    for(i=1;i<n;i++){
    	if(y<=in[i].a){y=in[i].b;coun++;}
    }
    printf("%d\n",coun);

    
}