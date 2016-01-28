#include<stdio.h>
int a[1000000][2]={0};
int main()
{int t,n1,n2,n3,c,coun,temp,mx;
coun=0;mx=0;
scanf("%d %d %d",&n1,&n2,&n3);
for(c=0;c<(n1+n2+n3);c++)
{scanf("%d",&temp);
  a[temp][0]=temp;a[temp][1]++; if(a[temp][1]==2){coun++;}
  if(mx<temp){mx=temp;}
}printf("%d\n",coun);
for(c=0;c<=mx;c++){if(a[c]!=0){if(a[c][1]>1){printf("%d\n",a[c][0]);}}}

}
