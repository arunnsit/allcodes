#include<stdio.h>
int main()
{int t,a[103],n,p,k,c;
scanf("%d",&t);
while(t){scanf("%d",&n);c=1;
for(p=0;p<n;p++){scanf("%d",&a[p]);}
scanf("%d",&k);
for(p=0;p<n;p++){if(a[p]<a[k-1])c++;}
printf("%d\n",c);
t--;
}
}
