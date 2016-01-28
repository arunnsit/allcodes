#include<stdio.h>
#include<algorithm>
int a[1000000];
int main()
{int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&a[i]);
std::sort(a,a+n);
for(i=0;i<n;i++){
    printf("%d ",a[i]-i);
}printf("\n");

}
