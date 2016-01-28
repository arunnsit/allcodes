#include<stdio.h>
int main(){
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    if(n-m>1||m>2*n+2)printf("-1\n");
    else{
        if(n==m){while(n&&m){printf("10");n--;m--;}printf("\n");}
        else if(n>m){
            printf("0");n--;
            while(n&&m){printf("10");n--;m--;}printf("\n");
        }
        else {m--;
                int p=m-n,pc=m-n;
        while(p&&m>0&&n>0){printf("110");m-=2;n--;p--;}
        while(m>0&&n>0){printf("10");m--;n--;}
        if(m!=0){printf("1");}
        printf("1\n");

        }


    }}

