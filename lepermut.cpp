#include<stdio.h>
int main()
{int t,a,k[102],b,c,d;
scanf("%d",&t);
while(t){int n,coun1=0,coun2=0;
scanf("%d",&n);
scanf("%d",&k[1]);
for(a=2;a<=n;a++){scanf("%d",&k[a]);if(k[a-1]>k[a]){coun1++;}}
for(a=1;a<=n;a++)
for(b=a+1;b<=n;b++){if(k[a]>k[b]){coun2++;}}
if(coun1==coun2){printf("YES\n");}
else{printf("NO\n");}
t--;
}
}
