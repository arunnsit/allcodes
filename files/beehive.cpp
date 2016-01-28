#include<stdio.h>
#include<math.h>
int main()
{long long int n;int t,o;float m;
scanf("%lld",&n);
while(n!=-1){
m=(float)((sqrt(9+12*(n-1)))-9)/6;
o=m;
if(o==m){printf("Y\n");}
else{
printf("N\n");}
scanf("%lld",&n);
}}
