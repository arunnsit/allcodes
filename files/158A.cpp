#include<stdio.h>
#include<algorithm>
int main()
{int n,i,j,k,c=0,a[60];
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)scanf("%d",&a[i]);
std::sort(a,a+n);
for(i=0;i<k;i++){if(a[n-1-i]!=0)c++;}
j=a[n-k];
for(i=n-1-k;i>=0;i--){if(a[i]!=0&&a[i]==j)c++;}
printf("%d\n",c);
}
