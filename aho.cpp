#include<stdio.h>
#include<string.h>
int main()
{int t,l1,l2,l3,g,h,x,y,z;char a[101],b[101],c[101],d,e;
scanf("%d",&t);
while(t)
{scanf("%s %c %s %c %s",&a,&d,&b,&e,&c);x=0;y=0;z=0;
l1=strlen(a);l2=strlen(b);l3=strlen(c);
for(g=0;g<101;g++){if(a[g]=='m'){h=1;break;}if(b[g]=='m'){h=2;break;}if(c[g]=='m'){h=3;break;}}
if(h==1){for(g=0;g<l2;g++){y=y*10+b[g]-'0';}for(g=0;g<l3;g++){z=z*10+c[g]-'0';}printf("%d %c %d %c %d\n",z-y,d,y,e,z);}
 if(h==2){for(g=0;g<l1;g++){x=x*10+a[g]-'0';}for(g=0;g<l3;g++){z=z*10+c[g]-'0';}printf("%d %c %d %c %d\n",x,d,z-x,e,z);}
if(h==3){for(g=0;g<l2;g++){y=y*10+b[g]-'0';}for(g=0;g<l1;g++){x=x*10+a[g]-'0';}printf("%d %c %d %c %d\n",x,d,y,e,x+y);}t--;}}