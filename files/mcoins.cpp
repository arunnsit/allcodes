#include<stdio.h>
#include<algorithm>
int mcoin[1000008]={0};
int main()
{int k,l,m,a[100],pmax=2,i,j;scanf("%d %d %d",&k,&l,&m);
for(i=0;i<m;i++){scanf("%d",&a[i]);}
mcoin[1]=1;mcoin[0]=0;
for(i=0;i<m;i++){
if(pmax<a[i]){for(j=pmax;j<=a[i];j++){mcoin[j]=(mcoin[j-1]+1)%2;if(k<=j&&mcoin[j-k]==0){mcoin[j]=1;}if(l<=j&&mcoin[j-l]==0){mcoin[j]=1;}}pmax=a[i];}
if(mcoin[a[i]]){printf("A");}
else{printf("B");}}printf("\n");}
