#include<stdio.h>
#include<string.h>
int main(){
    int t,k,a,b,p,i,l;char r[]={"415926530119026040722614947737296840070086399613316"};
    l=strlen(r);
    scanf("%d",&t);
    while(t){a=103993;b=33102;
            scanf("%d",&k);a=a%b;
            if(k==0)
            printf("3");
            else if(k==1){printf("3.1");}
            else{printf("3.1");k--;
            while(k>0){
                if(k>l){printf("%s",r);k=k-l;}

                else{for(i=0;i<l&&k>0;i++)
                   {printf("%c",r[i]);k--;}}

            }

            }
            printf("\n");


    t--;}
}
