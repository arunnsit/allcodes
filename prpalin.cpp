#include<stdio.h>
#include<string.h>
int main()
{int t,a,i,j,l,temp;char f[200000],g[200000];
scanf("%d",&t);
while(t){scanf("%s",&f);l=strlen(f);i=0;j=l-1;int co=0,m=0;strcpy(g,f);temp=0;
for(a=0;a<l/2;a++){if(f[i]!=f[j]){for(a=i;a<l-1;a++){f[a]=f[a+1];}for(a=j;a<l-1;a++){g[a]=g[a+1];}l--;break;}
i++;j--;}
for(a=0;a<l;a++){if(f[a]==f[l-a-1]){temp++;}}
if(temp==l){co=1;}
if(co!=1){temp=0; for(a=0;a<l;a++){if(g[a]==g[l-a-1]){temp++;}}
if(temp==l){co=1;}}
if(co==1){printf("YES\n");}
else{printf("NO\n");}
t--;
}}

