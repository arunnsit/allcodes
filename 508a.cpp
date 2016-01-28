#include<stdio.h>
int game[1002][1002]={0};
int main(){
    int n,o,k,i,j,p,q,c=0,m=1;
    scanf("%d %d %d",&n,&o,&k);
    for(i=0;i<k;i++){
        scanf("%d %d",&p,&q);
        game[p][q]=1;
        if(game[p-1][q-1]==1&&game[p-1][q]==1&&game[p][q-1]==1&&m){c=i+1;m=0;}
       else if(game[p-1][q]==1&&game[p-1][q+1]==1&&game[p][q+1]==1&&m){c=i+1;m=0;}
       else if(game[p+1][q]==1&&game[p+1][q+1]==1&&game[p][q+1]==1&&m){c=i+1;m=0;}
       else if(game[p][q-1]==1&&game[p+1][q-1]==1&&game[p+1][q]==1&&m){c=i+1;m=0;}
    }
    printf("%d\n",c);
}
