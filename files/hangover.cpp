#include<stdio.h>
int main()
{float a,b=0.00,c;int d=0;
scanf("%f",&a);
while(a){b=0.00;d=0;
for(c=2;c<300;c++)
{
b=b+1/c;d++;
if(b>a){break;}
}
printf("%d card(s)\n",d);
scanf("%f",&a);

}
}
