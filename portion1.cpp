#include<stdio.h>
inline int maxofcolours(int k[3]){int e,p=0;for(e=0;e<3;e++){if(k[e]>p){p=k[e];}}
return p;}

inline int maxofrows(int f[101],int l[101],int c[101],int a,int b,int g){int k[3]={0},d=0,e;
    for(e=0;e<a;e++){if(f[e]>k[0])k[0]=f[e];}
for(e=0;e<b;e++){if(l[e]>k[1])k[1]=l[e];}
for(e=0;e<g;e++){if(c[e]>k[2])k[2]=c[e];}
d=maxofcolours(k);for(e=0;e<3;e++){if(k[e]==d){break;}}
return e;
}
inline int maxfinal(int f[101],int l[101],int c[101],int a,int b,int g){int k[3]={0},d=0,e;
    for(e=0;e<a;e++){if(f[e]>k[0])k[0]=f[e];}
for(e=0;e<b;e++){if(l[e]>k[1])k[1]=l[e];}
for(e=0;e<g;e++){if(c[e]>k[2])k[2]=c[e];}
d = maxofcolours(k);

return d;
}
int main(){int t;
scanf("%d",&t);
while(t){int a,b,g,e,m,ma=0,f[101],l[101],c[101],k[3],v;
scanf("%d %d %d %d",&a,&b,&g,&m);
for(e=0;e<a;e++){scanf("%d",&f[e]);}
for(e=0;e<b;e++){scanf("%d",&l[e]);}
for(e=0;e<g;e++){scanf("%d",&c[e]);}

while(m>0){v=maxofrows(f,l,c,a,b,g);
if(v==0){for(e=0;e<a;e++){f[e]/=2;}}
if(v==1){for(e=0;e<b;e++){l[e]/=2;}}
if(v==2){for(e=0;e<g;e++){c[e]/=2;}}
m--;}
ma=maxfinal(f,l,c,a,b,g);
printf("%d\n",ma);t--;

}}
