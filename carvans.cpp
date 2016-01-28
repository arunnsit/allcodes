#include<stdio.h>
int main()
{int t,n,a[10009],c,coun;
scanf("%d",&t);
while(t){coun=0;
scanf("%d",&n);
scanf("%d",&a[0]);
for(c=1;c<n;c++){scanf("%d",&a[c]);if(a[c]<=a[c-1]){coun++;}else{a[c]=a[c-1];}
}t--;printf("%d\n",coun+1);
}}
