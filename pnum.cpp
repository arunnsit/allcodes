#include<stdio.h>
int main(){
    int t,n,p;char a[10];
    scanf("%d",&t);
    while(t){
            scanf("%d %s %d",&n,&a,&p);
    if(a[0]=='o'){
        printf("%d\n",2*p);
    }
    else{
        printf("%d\n",2*p-1);
    }
    t--;}
}
