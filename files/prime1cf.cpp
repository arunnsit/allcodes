//author: arunnsit
//so the question is not that easy as it seems to be , use sieve property : sqrt(n) can generate primes upto n ,create a segmented sieve
#include<stdio.h>
#include<math.h>
int  p=31630;
int s[31632]={0};//s will help us to generate primes upto 10^9
void sieve(){
    int i,j;
    for(i=2;i<=p;i++){
    for(j=i*i;j<=p;j+=i)
        s[j]++;
    }
}
int main(){
    sieve();
    int t,a,b,i,x,y,j,c;
    scanf("%d",&t);
    while(t){c=0;
        int p[200001]={0};//p is segmentd seive
        scanf("%d %d",&a,&b);
        y=sqrt(b);
        for(i=2;i<=y;i++){

            if(s[i]==0){
                int k=a%i;
        if(k==0)k=i;k=a+i-k;
                for(j=k;j<=b;j+=i){
                    if(j>i)
                    {p[j-a]++;}
                }
            }
        }
        for(i=a;i<=b;i++){
            if(p[i-a]==0&&i!=1)c++;
        }
        printf("%d\n",c);
    t--;}
}
