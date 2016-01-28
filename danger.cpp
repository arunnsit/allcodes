#include<stdio.h>
int main(){
    int x,y,z,n;
    scanf("%de%d",&x,&z);
    while(z--)x=x*10;n=x;
    while(n){
    int start=1,val=0,siz=1,podd=1;
    while(n>1){
        if(n%2==0&&podd){n=(n)/2;siz*=2;val+=siz;}
        else if(n%2!=0&&podd){
            n=(n+1)/2;
            siz*=2;
            val+=siz;
            podd=0;

        }
        else if(n%2==0&&!podd){
            n=n/2;
            start+=siz;
            siz*=2;
        }
        else if(n%2!=0&&!podd){
            n=n/2;
            start+=siz;

            siz*=2;
            podd=1;
        }

        }
        printf("%d\n",start);
           scanf("%de%d",&x,&z);
    while(z--)x=x*10;n=x;
        }

}

