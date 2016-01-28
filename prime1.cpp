#include<stdio.h>
#include<math.h>
int p[100000000]={0};
int main()
{int t,m,n,a,b,o;
scanf("%d",&t);
while(t){scanf("%d %d",&m,&n);if(m==1){m=2;}
for(a=m;a<=n;a++)
{if(a<100000000){if(p[a]!=0){printf("%d\n",p[a]);}
else{o=-1;
for(b=2;b<=sqrt(a);b++) {if(a%b==0){o=-2;break;}}
if(o==-1){printf("%d\n",a);if(a<100000000){p[a]=a;}}}
}
else{o=-1;
for(b=2;b<=sqrt(a);b++) {if(a%b==0){o=-2;break;}}
if(o==-1){printf("%d\n",a);if(a<100000000){p[a]=a;}}}}

t--;

}

}
