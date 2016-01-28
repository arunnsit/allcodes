#include<stdio.h>
#include<math.h>
#include<algorithm>
int main()
{int t,x1,y1,x2,y2,x3,y3,coun;int l1,l2,l3,x,y,z;coun=0;
scanf("%d",&t);
while(t){scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
l1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
l2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
l3=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
x=std::max(std::max(l1,l2),l3);
y=std::min(std::min(l1,l2),l3);
if(x==l1&&y==l2){z=l3;}
else if(x==l2&&y==l1){z=l3;}
else if(x==l3&&y==l2){z=l1;}
else if(x==l2&&y==l3){z=l1;}
else if(x==l1&&y==l3){z=l2;}
else if(x==l3&&y==l1){z=l2;}
if(x==y+z){coun++;}
t--;}printf("%d\n",coun);}
