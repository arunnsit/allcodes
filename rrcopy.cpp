#include<stdio.h>
int main()
{int t,n,tr,i,c;scanf("%d",&t);
while(t){int a[100005]={0};
scanf("%d",&n);c=0;
for(i=0;i<n;i++){scanf("%d",&tr);a[tr]++;if(a[tr]==1)c++;}
printf("%d\n",c);
t--;}


}
