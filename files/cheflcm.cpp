#include<stdio.h>
#include<math.h>
int main(){
    int t,n,i,j;long long int sum;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int p=sqrt(n);sum=0;
        for(i=1;i<=p;i++){
            if(n%i==0&&(n/i)!=i){sum+=i;sum+=n/i;}
            else if(n%i==0&&(n/i)==i)sum+=i;
        }
        printf("%lld\n",sum);
    }
}
