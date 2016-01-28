#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,m,p;
        scanf("%d %d",&n,&m);
        p=n>m?m:n;
        if(n==m){
            if(n%2==0)printf("L\n");
            else printf("R\n");
        }
        else{
            if(p==n){
                if(n%2==0)printf("L\n");
            else printf("R\n");
            }
            else{
                if(m%2==0)printf("U\n");
            else printf("D\n");
            }
        }
    }
}
