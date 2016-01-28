#include<stdio.h>
#include<algorithm>
int main(){
    int t;
    int e,o,x;
    scanf("%d",&t);
    while(t){
            scanf("%d %d",&e,&o);
x=abs(3*e-2*o);
        if((x)%5==0){printf("%d\n",x/5);}
        else{printf("-1\n");}




    t--;}
}
