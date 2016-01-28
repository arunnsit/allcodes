#include<stdio.h>
int main(){
    int n,q;
    scanf("%d",&n);
    while(n){
            q=0;
    if(n==1)q--;
    while(n){n=n/2;q++;if(n==1)q--;}
        printf("%d\n",q);
        scanf("%d",&n);
}
}
