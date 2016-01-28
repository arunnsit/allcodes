#include<stdio.h>
int a[15][300]={0};
void permut(){
    int i,j,k;
    a[1][0]=1;
        for(i=2;i<=13;i++){
        for(j=0;j<i;j++){
        for(k=0;k<=200;k++){
            a[i][k+j]+=a[i-1][k];
                   // printf("row:%d shift:%d position:%d\n",i,j,k+j);
        }
    }}
}
int main(){
    int i,j,k;
    permut();
    scanf("%d",&i);
    while(i--){
            scanf("%d %d",&j,&k);
            printf("%d\n",a[j][k]);
    }
}
