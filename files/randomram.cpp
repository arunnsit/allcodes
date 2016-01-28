#include<stdio.h>
#include<string.h>
char a[15];
int main()
{int k,l,t=0,b,e,f;
scanf("%d",&t);
while(t)
{b=0;e=1;f=0;
scanf("%s",&a);l=strlen(a);
for(k=0;k<l;k++){if(a[k]-'0'!=0){b=e;}
if(((a[k]-'0'+(a[k-1]-'0')*10)<=26)&&((a[k]-'0'+(a[k-1]-'0')*10)>0)&&(k>0)&&(a[k-1]!='0')){b+=f;}f=e;e=b;}
printf("%d\n",b);t--;}}
