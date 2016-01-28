#include<stdio.h>
#include<math.h>
int gcd(int x,int y)
{if (y==0){return x;}else return gcd(y,x%y);}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,i,p,d=0;
        scanf("%d %d",&a,&b);
    c=gcd(a,b);
    p=sqrt(c);
    //printf("gcd%d\n",c);
    for(i=1;i<=p;i++)if(c%i==0)d+=2;
    if(p*p==c)d--;
    printf("%d\n",d);
    }
}
