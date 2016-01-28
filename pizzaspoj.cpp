#include<stdio.h>
#include<algorithm>
int main(){int m,n,i,j,t,su;float a,b,c,d,s,x,y,z,w,p,q,r;
scanf("%d",&t);p=0;q=0;r=0;su=0;x=0;
for(i=0;i<t;i++){scanf("%d/%d",&m,&n);a=(float)m/n;if(a==0.5){p++;}if(a==0.75){q++;}if(a==0.25){r++;}}
if(r-q>0){r=r-q;x=q;}else{r=0;x=q;}
y=p/2;z=r/4;
s=(float)x+y+z+1;t=s;
if(s>t){printf("%d\n",t+1);}
else{printf("%d\n",t);}
}
