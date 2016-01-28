#include<stdio.h>
#include<algorithm>
int main()
{int t,a[200],i,s,y,n,k;
scanf("%d",&t);
while(t)
{scanf("%d %d",&n,&k);s=0;for(i=0;i<n;i++){scanf("%d",&a[i]);s+=a[i];}if(k>n/2){k=n-k;}
std::sort(a,a+n);y=0;
for(i=0;i<k;i++){y+=a[i];}
printf("%d\n",s-2*y);
t--;}

}
