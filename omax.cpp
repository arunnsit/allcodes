#include<stdio.h>
int main(){int a,b,c,d,e,f,m,n,i=0,g[100][100],k,max=0,e1,e2,e3,e4;
scanf("%d %d",&m,&n);
for(a=0;a<m;a++)
for(b=0;b<n;b++)
{scanf("%d",&g[a][b]);}
for(a=0;a<m-2;a++)
for(b=0;b<n-2;b++)
{for(e=a+2;e<m;e++)
for(f=b+2;f<n;f++){
e1=e2=e3=e4=0;
for(c=b+1;c<f;c++)
{e1+=g[a][c];e3+=g[e][c];}printf("e1:%d e3:%d",e1,e3);
for(c=a;c<=e;c++)
{e4+=g[c][b];e2+=g[c][f];}printf("e4:%d e2:%d",e4,e2);
k=e1+e2+e3+e4;
printf("case:%d sum:%d",i,k);i++;if(k>max){max=k;}}}
printf("%d",max);}
