#include<stdio.h>
#include<string.h>
int main()
{int t,i,j,k,l,l2;char a[25010],b[25010];
scanf("%d",&t);
while(t)
{scanf("%s %s",&a,&b);l=strlen(a);l2=strlen(b);
if(l<=l2){k=0;
        for(i=0;b[i]!='\0';i++){if(a[k]==b[i]){k++;}}
        if(k==l){printf("YES\n");}
        else{printf("NO\n");}}
else{k=0;
        for(i=0;a[i]!='\0';i++){if(a[i]==b[k]){k++;}}
        if(k==l2){printf("YES\n");}
        else{printf("NO\n");}}



    t--;
}}


