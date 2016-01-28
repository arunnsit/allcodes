#include<stdio.h>
int main(){
    int n,i,p=1,z,c=0,y,a;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        z=i;
        while(z>0){
             a=z%10;
            if(a==0||a==1){}else break;
            z=z/10;
        }
        if(!z){c++;}
        z=i;
        while(z>0){
            int a=z%10;
            if(a!=1)break;
            z=z/10;
        }
        if(!z){
            i=p*10-1;
            p=p*10;
        }

    }
    printf("%d\n",c);
}
