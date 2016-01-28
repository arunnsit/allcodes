#include<stdio.h>
int main()
{int n,i,a[1010],b[1010],c[1010],m,k,to;
scanf("%d",&n);
while(n)
{for(i=0;i<n;i++){scanf("%d",&a[i]);}m=0;k=0;to=0;
for(i=1;i<n;i++){if(a[i]<a[i-1]){b[m]=a[i-1];m++;}else{c[k]=a[i-1];k++;}
if(a[i]>b[m-1]&&m>0){while(a[i]>b[m-1]&&m>0){c[k]=b[m-1];k++;m--;}}}
if(a[n-1]<=b[m-1]){c[k]=a[n-1];k++;}
for(i=m-1;i>-1;i--){c[k]=b[i];k++;}
for(i=1;i<k;i++){if(c[i]<c[i-1]){to=1;printf("no\n");break;}}
if(to==0){printf("yes\n");}
scanf("%d",&n);
}}
