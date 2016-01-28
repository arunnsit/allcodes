#include<stdio.h>
int main(){
    int t,n,m,i,j;
    scanf("%d",&t);
    while(t){int a[1002]={0},b[10002][2]={0},c[10002]={0};
            scanf("%d %d",&n,&m);
    for(i=0;i<m;i++){
        scanf("%d %d",&b[i][0],&b[i][1]);
    }
    for(i=m-1;i>=0;i--){
        if(a[b[i][0]]==0&&a[b[i][1]]==0){
            a[b[i][0]]=1;
            a[b[i][1]]=1;
            c[i]=1;
        }
    }
    for(i=0;i<m;i++){if(c[i])printf("%d ",i);}printf("\n");


    t--;}
}
