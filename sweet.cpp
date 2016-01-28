//author:alpha coder;
//kadane's algo
#include<stdio.h>
long long int a[100005];
int main(){
    long long int t,i,j,n,x,sum,profit;
    scanf("%lld",&t);
    while(t){sum=0;profit=0;
        scanf("%lld %lld",&n,&x);
        sum=0;profit=0;
        for(i=0;i<n;i++){scanf("%lld",&a[i]);
        }
        for(i=0;i<n;i++){
            if(a[i]>x||sum+a[i]-x>0){
                sum+=a[i]-x;
            }
            else{
                sum=0;
            }
            if(sum>profit){profit=sum;}
        }
        printf("%lld\n",profit);
    t--;}
}
