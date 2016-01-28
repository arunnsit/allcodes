#include<stdio.h>
#include<math.h>
int main()
{int t;
scanf("%d",&t);
while(t){int p,a;scanf("%d %d",&p,&a);
printf("%.2f\n", (((p - sqrt((p*p) - 24 * a))/12) * ((a / 2) - ((p/4) * ((p - sqrt((p*p) - 24 * a))/12)) + (((p - sqrt((p*p) - 24 * a))/12) * ((p - sqrt((p*p) - 24 * a))/12)))));

 t--;
}
}
