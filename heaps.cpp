#include<stdio.h>
int a[10000][10000]={0};
int main(){
    int t,l,d,e,i,j,k,p,x,y;
            scanf("%d %d %d",&l,&d,&e);
    /*for(i=1;i<=l;i++)
        for(j=1;j<=d;i++)a[i][j]=0;*/
    for(i=1;i<=e;i++){
        scanf("%d",&p);
        for(j=1;j<=p;j++){
            scanf("%d %d",&x,&y);

            a[x][y]=i;
        }
    }
    for(i=1;i<=l;i++){
        for(j=1;j<=d;j++)
                printf("%d ",a[i][j]);
                printf("\n");
        }
    }


