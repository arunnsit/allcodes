#include<stdio.h>
#include<string.h>
int main()
{int temp,b,c,x,i,d,l,l2,e,t=10;char p[109],dif[109];
while(t)
{i=0,x=0;int a[103]={0},o[103]={0},v[104]={0},z[104]={0};
scanf("%s %s",&p,&dif);
l=strlen(p);l2=strlen(dif);
for(b=0;b<l2;b++){o[b]=dif[b]-'0';}
for(b=0;b<l;b++){a[b]=p[b]-'0';z[b]=p[b]-'0';}e=l-1;
for(b=l2-1;b>=-1;b--){temp=o[b]+a[e]+x;a[e]=temp%10;x=temp/10;e--;}for(b=0;b<l;b++){printf("%d",a[b]);}printf("\n");
x=0;
for(b=0;b<l;b++){temp=a[b]+x*10;v[i]=temp/2;i++;if((v[i-1]==0)&&(i==1)){i--;}x=temp%2;}e=l-1;
for(b=i-1;b>=0;b--){d=e;if(z[e]-v[b]<0){z[d]=10+z[d]-v[b];d--;e--;while(z[d]==0){z[d]=9;d--;}z[d]=z[d]-1;}else{z[e]=z[e]-v[b];e--;}}
for(b=0;b<i;b++){printf("%d",v[b]);}
printf("\n");
if(z[0]==0){d=1;if(z[1]==0){d=2;}}else{d=0;}
for(b=d;b<l;b++){printf("%d",z[b]);}
printf("\n");
t--;
}
}
