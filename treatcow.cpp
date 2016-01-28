#include<stdio.h>
#include<algorithm>
int n;int p=1,k,y;int j=n-1,o=0,s=0,b[10000][10000]={0}, a[10000];
int solve(int i ,int j,int p)
{
if(i>j){return 0;}
else{if(b[i][j]!=0){return b[i][j];}
else{ k=std::max(solve(i+1,j,p+1)+a[i]*p,solve(i,j-1,p+1)+a[j]*p);b[i][j]=k;return k;}}}


int main()
{int i,j;long long p;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d",&a[i]);}i=0;
p=solve(0,n-1,1);
printf("%lld\n",p);
}
