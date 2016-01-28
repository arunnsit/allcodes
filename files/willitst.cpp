#include<stdio.h>
int main()
{long long int a;long long int p=0,k=1;
scanf("%lld",&a);
while(1){if(k<a){k=k*2;}if((k==a)||(a==0)){p=-1;break;}if(k>a){p=0;break;}}
if(p==-1){printf("TAK\n");}
else{printf("NIE\n");}}

