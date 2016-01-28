#include<stdio.h>
int main()
{int a,b,c,d,n;float m;
scanf("%d %d",&a,&b);
while(a!=-1&&b!=-1)
{if(b>=a){c=b;d=a;}else{c=a;d=b;}
 m=(float)c/(d+1);n=m;
 if(m>n||m<n){printf("%d\n",n+1);}
 else{printf("%d\n",n);}
scanf("%d %d",&a,&b);

}

}
