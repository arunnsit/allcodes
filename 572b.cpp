#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	char a[2];
	int  p;
	int  q;
};
bool cmp1(node a,node b){
	return a.p<b.p;
}
bool cmp2(node a,node b){
	return a.p>b.p;
}
node a[1005],b[1005],c[1005];
int main(){
	int n,s,p,q,x=1,y=1,i,j;
	char tmp[2];
	scanf("%d %d",&n,&s);
	for(i=0;i<n;i++){
		scanf("%s %d %d",a[i].a,&a[i].p,&a[i].q);
}
for(i=0;i<n;i++){
	if(a[i].p!=-1&&a[i].a[0]=='S'){
	b[x].p=a[i].p;
	b[x].q=a[i].q;
	x++;
}
	if(a[i].p!=-1&&a[i].a[0]=='B'){
	c[y].p=a[i].p;
	c[y].q=a[i].q;
	y++;
}   if(a[i].p!=-1){
	for(j=i+1;j<n;j++){
		if(a[j].p!=-1){
		if(a[i].p==a[j].p&&a[i].a[0]==a[j].a[0]&&a[i].a[0]=='S'){
              b[x-1].q+=a[j].q;
              a[j].p=-1;
		}
		if(a[i].p==a[j].p&&a[i].a[0]==a[j].a[0]&&a[i].a[0]=='B'){
              c[y-1].q+=a[j].q;
              a[j].p=-1;
		}
	}
}
}
}

sort(b+1,b+x,cmp1);
sort(c+1,c+y,cmp2);
for(i=min(s,x-1);i>=1;i--)printf("S %d %d\n",b[i].p,b[i].q);
for(i=1;i<=s&&i<y;i++)printf("B %d %d\n",c[i].p,c[i].q);

}