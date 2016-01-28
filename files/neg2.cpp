#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

        char a[20];
        int s=0,x,r,i;
        if(n==0)printf("0\n");
        else {while(n){
            x=n/-2;
            r=n+2*x;
            if(r<0){r=1;if(n>0)n++;if(n<0) n--;}
                        n=n/-2;
            //printf("n:%d\n",n);
            a[s]=r+48;
            s++;

        }
        for(i=s-1;i>=0;i--)
        printf("%c",a[i]);
        printf("\n");

}}
