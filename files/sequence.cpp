#include<stdio.h>
int main()
{int n,i,a,b,temp;
scanf("%d",&n);i=2;scanf("%d",&a);b=a;
while(i<n)
{scanf("%d",&a);
    if(a>b){break;}
    b=a;i++;
}
b=a;
while(i<n)
{scanf("%d",&a);
    if(a<b){break;}b=a;i++;
}
if(i==n){printf("yes\n");}
else{printf("no\n");}

}
