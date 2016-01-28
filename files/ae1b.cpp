#include<stdio.h>
#include<algorithm>
int main()
{int n,k,s,a[1009],i,p,j;scanf("%d %d %d",&n,&k,&s);
for(i=0;i<n;i++){scanf("%d",&a[i]);}
std::sort(a,a+n);p=k*s;j=n-1;i=0;
while(p>0){p-=a[j];j--;i++;}
    printf("%d\n",i);
}
