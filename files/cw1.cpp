#include<stdio.h>
#include<string.h>
int main()
{char a[256],b[11][256],n,c,d,e,f,l1,m,l[11],coun=0;
scanf("%d",&n);
scanf("%s",&a);
l1=strlen(a);
for(c=0;c<n;c++)
{scanf("%s",&b[c]);l[c]=strlen(b[c]);}
for(e=0;e<n;e++)
{for(d=0;d<l1-l[e]+1;d++)
{coun=0;
for(c=0;c<l[e];c++)
{if(a[d+c]==b[e][c]){coun++;}
}
if(coun==l[e]){for(f=d;f<l1-l[e];f++){a[f]=a[f+l[e]];}l1=l1-l[e];d=d-1;}
}}
if(l1>0)for(d=0;d<l1;d++){printf("%c",a[d]);}
else{printf("0");}
printf("\n");
}
