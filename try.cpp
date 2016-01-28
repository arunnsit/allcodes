#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    long long int a;
    int i=0;
    char x[30];
    scanf("%lld",&a);
    a--;
    while(a){
     x[i++]=a%2+'5';
     a/=2;
    }
    while(i-->=0){
printf("%c",x[i]);
    }
    printf("\n");
}}
