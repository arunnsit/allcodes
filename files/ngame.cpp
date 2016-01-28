#include<stdio.h>
#include<algorithm>
long long int a[300000]={0},c[300000]={0},b[300000][2]={0};
int main(){
	int n,q,i,j,x,y;
	scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    while(q--){
     scanf("%d %d",&x,&y);
     b[x-1][0]++;
     b[y-1][1]++;
    }
    int u=0;
    for(i=0;i<n;i++){
    	if(b[i][0])u+=b[i][0];
    	c[i]=u;
    	if(b[i][1])u-=b[i][1];
    }
    std::sort(c,c+n);
    std::sort(a,a+n);
    long long int s=0;
    for(i=0;i<n;i++){
    	s+=c[i]*a[i];
    }
    printf("%lld\n",s);

}