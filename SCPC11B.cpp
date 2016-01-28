#include<stdio.h>
#include<algorithm>
int main(){
int n,i,a[10000];
scanf("%d",&n);

while(n){
for(i=0;i<n;i++)scanf("%d",&a[i]);
	std::sort(a,a+n);
int c=0,x=0;
for(i=0;i<n;i++){
if(a[i]-x<=200){
	x=a[i];
}
else {
	c=1;
	break;
}
}
x=1422;
int y=200-1422+a[n-1];
for(i=n-1;i>=0;i--){
if(x-a[i]<=y){
	x=a[i];
}
else {
	c=1;
	break;
}
y=200;
}
if(c)printf("IMPOSSIBLE\n");
else printf("POSSIBLE\n");
scanf("%d",&n);

}
}