#include<stdio.h>
int val(int n)
{
if(n==2)return 1;
if(n==16)return 0;
if ( n == 17 ) return 1;
if ( n == 34 ) return 0;
if ( n == 289 ) return 0;
int i;
for(i=2;i*i<=n;i++)
if(n%i==0)return 1;
return 0;}
int main(){
int t,n;
scanf("%d",&t);
while(t--){
scanf("%d",&n);
if(val(n))printf("Mike\n");
else printf("Tom\n");
}}