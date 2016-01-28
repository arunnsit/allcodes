#include<stdio.h>
int main(){
    int t,n,k,T,f;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d %d",&n,&k,&T,&f);
        printf("%d\n",n+(k)*((f-n)/(k-1)));
    }
}
