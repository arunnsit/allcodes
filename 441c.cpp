#include<stdio.h>
int main()
{int n,m,k,i,j,p,c=0,u=0;
scanf("%d %d %d",&n,&m,&k);
for(i=1;i<=n;i++){
        if((i+1)%2==0){
        for(j=1;j<=m;j++){
if(c>=2*(k-1)){if(u==0)printf("\n%d ",n*m-2*(k-1));u++;}if(c>=n*m)break;
            if((j+1)%2==0&&u==0){if((i!=1||j!=1))printf("\n");printf("2 ");}
            printf("%d %d ",i,j);c++;
        }
        if(m%2!=0){if(c>=2*(k-1)){if(u==0)printf("\n%d ",n*m-2*(k-1));u++;}if(c>=n*m)break;printf("%d %d ",i+1,m);p=m-1;c++;}
        else{p=m;}
        }
        if((i+1)%2!=0){
        for(j=p;j>0;j--){if(c>=2*(k-1)){if(u==0)printf("\n%d ",n*m-2*(k-1));u++;}if(c>=n*m)break;
            if((j)%2==0&&u==0){printf("\n2 ");}
            printf("%d %d ",i,j);c++;
        }}

}}
