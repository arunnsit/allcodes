//alpha coder
#include<stdio.h>
#include<algorithm>
int main(){
    int n,i,j,p=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&j);
        if(j==0)p=0;
        else p++;
        c=std::max(c,p);
    }
    printf("%d\n",c);
}
