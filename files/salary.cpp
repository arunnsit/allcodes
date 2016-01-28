#include<stdio.h>
int main()
{int t,n,i,mi,coun,a[200];
scanf("%d",&t);
while(t)
{scanf("%d",&n);mi=111111111;coun=0;
for(i=0;i<n;i++){scanf("%d",&a[i]);if(mi>a[i]){mi=a[i];}}
for(i=0;i<n;i++){coun+=a[i]-mi;}
printf("%d\n",coun);

t--;}

}
