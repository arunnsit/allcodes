#include<stdio.h>

int gcd(int x,int y)
{if (y==0){return x;}else return gcd(y,x%y);}

int main(){
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&a,&b);
        int d;
        d=gcd(a,b);
        printf("%d %d\n",b/d,a/d);
    }
}
