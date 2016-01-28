#include<stdio.h>
#include<string.h>
#define a(x)(x*x*(x))
#define n(x)(a(x)*a(x)*a(x+x))
int main(){
    int x=2,y,z,l;
    printf("%d\n",a(3+5-8));
    printf("%d\n",n(9-5+0));
}
