#include<stdio.h>
int main()
{int t,N;scanf("%d",&t);
while(t)
{scanf("%d",&N);
if (360 % N == 0 &&N<=360){printf("y ");}else{printf("n ");}
if (N<=360){printf("y ");}else{printf("n ");}
if ((N * (N + 1)) / 2 <= 360 ){printf("y");}else{printf("n");}printf("\n");


t--;}

}
