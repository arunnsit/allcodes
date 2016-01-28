#include<stdio.h>
#include<string.h>
int main()
{    long long a,b,ini,temp;int o[100],d,p,t,c,v;char k[1005];
scanf("%d",&t);
while(t--)
{    scanf("%s %lld",&k,&b);v=strlen(k);
if(b==0){printf("1\n");}
 else{ini=k[v-1]-'0';o[0]=ini;c=0,p=0;temp=ini;
 while(1){temp=(temp*ini)%10;if(temp==ini){p=1;break;}else{c++;o[c]=temp;}}c++;
 {d=(b-1)%c;}
 printf("%d\n",o[d]);}}}
