#include<stdio.h>
#include<algorithm>
float a[3000]={0};int p[10000000],q[10000000];
int main(){int t,k,i,ch,x1,y1,j,ma,pos;float x,y;
scanf("%d",&t);
while(t)
{scanf("%d",&k);ma=0;
for(i=0;i<k;i++){pos=0;scanf("%d %d",&p[i],&q[i]);for(j=0;j<i;j++){a[j]=(float)(q[j]-q[i])/(p[j]-p[i]);}
std::sort(a,a+i);x1=1;
for(j=0;j<i;j++){if(a[j]==a[j+1]){x1++;}else{x1=0;}if(x1>ma){ma=x1;}}
 }
printf("%d\n",ma);

t--;}
}
