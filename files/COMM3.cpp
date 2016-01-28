#include<stdio.h>
#include<math.h>
int main(){ float side1,side2,A,B,side3,b,p,r,m,n,t,z,y,coun;int l;
scanf("%f",&t);
while(t){scanf("%f",&r);
scanf("%f %f",&b,&p);
scanf("%f %f",&z,&y);
side1=sqrt((b-z)*(b-z)+(p-y)*(p-y));
scanf("%f %f",&m,&n);
side2=sqrt((z-m)*(z-m)+(y-n)*(y-n));
side3=sqrt((m-b)*(m-b)+(n-p)*(n-p));

if((side1<=r)&&(side2<=r)&&(side3>=r)){printf("yes\n");}
else {if((side1<=r)&&(side2>=r)&&(side3<=r)){printf("yes\n");}
else {if((side1>=r)&&(side2<=r)&&(side3<=r)){printf("yes\n");}
else {if((side1<=r)&&(side2<=r)&&(side3<=r)){printf("yes\n");}
else printf("no\n");}}}
t--;
}
}
