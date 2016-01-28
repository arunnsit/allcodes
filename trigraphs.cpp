#include<stdio.h>
#include<algorithm>
int a[100003][3]={0};
int main()
{int m,fina;int n,p,g,h,i,k=1;scanf("%d",&n);
while(n)
{m=0;
for(i=0;i<n;i++){scanf("%d %d %d",&a[i][0],&a[i][1],&a[i][2]);}a[0][0]=2147483647;a[0][2]+=a[0][1];
 for(i=1;i<n;i++){a[i][0]+=std::min(a[i-1][0],a[i-1][1]);
 a[i][1]+=std::min(std::min(a[i-1][0],a[i-1][1]),std::min(a[i-1][2],a[i][0]));
 a[i][2]+=std::min(std::min(a[i-1][1],a[i-1][2]),a[i][1]);}
 fina=a[n-1][1];

 printf("%d. %d\n",k,fina);k++;scanf("%d",&n);}
}
