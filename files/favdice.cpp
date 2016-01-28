#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
            double sol=0;
            int n,p;
            scanf("%d",&n);
            p=n;
            while(n>0){
                sol+=(double)p/n;
                n--;
            }
            printf("%.2f\n",sol);

    }
}
