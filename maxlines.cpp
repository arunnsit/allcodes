#include<stdio.h>
int main()
{int t,i=1; float a,b;
scanf("%d",&t);
while(i<=t){
    scanf("%f",&a);b=(float)(a*a*4+1/4.f);
    printf("Case %d: %.2f\n",i,b);i++;
}

}
