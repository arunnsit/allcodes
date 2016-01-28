#include<stdio.h>
int main(){int t;
scanf("%d",&t);
while(t){long long a,b,g,e,m,fals,maxa=0,f[101],l[101],c[101],k[3]={0},v=0;
scanf("%lld %lld %lld %lld",&a,&b,&g,&m);
for(e=0;e<a;e++){scanf("%lld",&fals);if(fals>k[0]){k[0]=fals;}}
for(e=0;e<b;e++){scanf("%lld",&fals);if(fals>k[1]){k[1]=fals;}}
for(e=0;e<g;e++){scanf("%lld",&fals);if(fals>k[2]){k[2]=fals;}}

while(m>0){maxa=k[0];v=0;
for(e=0;e<3;e++){if(k[e]>maxa){maxa=k[e];v=e;}}
k[v]/=2;m--;}maxa=k[0];
for(e=0;e<3;e++){if(k[e]>maxa){maxa=k[e];}}
printf("%lld\n",maxa);t--;

}}
