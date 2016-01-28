#include<stdio.h>
int main()
{int t=0; float a,b;
scanf("%d",&t);
while(t)
{scanf("%f %f",&a,&b);
printf("%0.6f\n",(b+1)/a);t--;
}
return 0;
}

