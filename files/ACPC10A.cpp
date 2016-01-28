#include<stdio.h>
int main()
{int a,b,c;

while(1)
{  scanf("%d %d %d",&a,&b,&c);
if((a!=b)&&(b!=c)&&(c!=0)){
if(2*b==a+c){printf("AP %d\n",2*c-b);}
if(b*b==c*a){printf("GP %d\n",c*c/b);}}
else{break;}}
return 0;
}
