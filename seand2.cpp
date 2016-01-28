#include<stdio.h>
#include<string.h>
int main()
{int t,n,i,l;char a[1002];int b[1002];
scanf("%d",&t);
while(t){
    scanf("%s",&a);l=strlen(a);
        scanf("%d",&n);
for(i=0;i<n;i++)scanf("%d",&b[i]);
for(i=l-1;i>=(l-1)/2;i--)printf("%c",a[i]);
for(i=(l-1)/2+1;i>=0;i--)printf("%c",a[i]);

printf("\n");t--;

}

}
