#include<stdio.h>
int main()
{char a[130];int t;
scanf("%d",&t);
while(t){int n,p=1,coun=0;
scanf("%d",&n);a[0]='a';
while(coun<n)
{a[p]=a[p-1]+1;coun++;if(p%26==0){a[p]='a';coun--;}p++;
}p--;
while(p>=0){printf("%c",a[p]);p--;}
printf("\n");


t--;}
}


