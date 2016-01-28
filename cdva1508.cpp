//alphacoder
#include<stdio.h>
#include<algorithm>
int main()
{int t,n,k,te,i;
scanf("%d",&t);
while(t)
{scanf("%d",&n);int a[100009]={0};
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}std::sort(a,a+n);
long long int sum=0;
for(i=0;i<n;i++)
{if(a[i]>sum+1){break;}
    else sum+=a[i];
}
printf("%lld\n",sum+1);

t--;}

}
