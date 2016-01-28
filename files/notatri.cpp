#include<stdio.h>
#include<algorithm>
int main()
{int t,n,i,a[2002],j,k,p,coun;scanf("%d",&n);
while(n)
{for(i=0;i<n;i++)scanf("%d",&a[i]);coun=0;
std::sort(a,a+n);coun=0;
for(i=0;i<n-2;i++)
{j=n-i-2;p=0;
k=n-i-1;
while(p<j){if(a[p]+a[j]<a[k]){coun+=j-p;p++;}else{j--;}}}


printf("%d\n",coun);scanf("%d",&n);}

}
