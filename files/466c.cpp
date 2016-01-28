#include<stdio.h>
#include<unordered_map>
int a[500009];
using namespace std;
long long int map1[500009]={0};
int main(){
	int n,i,j;
	long long int s=0,ways=0,x=0;
	scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]),s+=a[i];

for(i=0;i<n-1;i++){
	x+=a[i];
	if(s/3==x)
	map1[i]=map1[i-1]+1;
else map1[i]=map1[i-1];
}x=0;
// printf("%lld\n",s);
for(i=n-1;i>=2;i--){
	x+=a[i];
	if(x==s/3)ways+=(map1[i-2]);
}
if(s%3==0)
printf("%I64d\n",ways);
else printf("0\n"); 

}