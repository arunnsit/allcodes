#include<stdio.h>
int main(){int n,i=0,x=1;scanf("%d",&n);for(;i<32;i++){if(1&(n>>i))printf("%d ",x);x*=2;}printf("\n");}
