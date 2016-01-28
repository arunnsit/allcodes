#include<stdio.h>
#include<algorithm>
int a[200][200]={0},b[200][200]={0};
char c[200][200]={0};
int main(){
    int t,n,m,i,j,temp;
    scanf("%d",&t);
    while(t--){
    scanf("%d %d",&n,&m);
    for(i=0;i<=n+1;i++)
    for(j=0;j<=m+1;j++){a[i][j]=1000;}
    for(i=1;i<=n;i++)scanf("%s",c[i]);
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++){
        b[i][j]=c[i][j-1]-'0';
    }
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++){
        temp=b[i][j];
        if(temp==1){
            a[i][j]=0;
        }
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(a[i][j]!=0){
                a[i][j]=std::min(std::min(std::min(std::min(a[i][j-1]+1,a[i-1][j]+1),std::min(a[i-1][j-1]+2,a[i+1][j+1]+2)),std::min(std::min(a[i-1][j+1]+2,a[i+1][j-1]+2),std::min(a[i][j+1]+1,a[i+1][j]+1))),a[i][j]);
            }
        }
        for(j=m;j>0;j--){
            if(a[i][j]!=0){
                a[i][j]=std::min(std::min(std::min(std::min(a[i][j-1]+1,a[i-1][j]+1),std::min(a[i-1][j-1]+2,a[i+1][j+1]+2)),std::min(std::min(a[i-1][j+1]+2,a[i+1][j-1]+2),std::min(a[i][j+1]+1,a[i+1][j]+1))),a[i][j]);
            }
        }}
        for(j=1;j<=m;j++){
        for(i=1;i<=n;i++){
            if(a[i][j]!=0){
                a[i][j]=std::min(std::min(std::min(std::min(a[i][j-1]+1,a[i-1][j]+1),std::min(a[i-1][j-1]+2,a[i+1][j+1]+2)),std::min(std::min(a[i-1][j+1]+2,a[i+1][j-1]+2),std::min(a[i][j+1]+1,a[i+1][j]+1))),a[i][j]);
            }
        }
        for(i=n;i>0;i--){
            if(a[i][j]!=0){
                a[i][j]=std::min(std::min(std::min(std::min(a[i][j-1]+1,a[i-1][j]+1),std::min(a[i-1][j-1]+2,a[i+1][j+1]+2)),std::min(std::min(a[i-1][j+1]+2,a[i+1][j-1]+2),std::min(a[i][j+1]+1,a[i+1][j]+1))),a[i][j]);
            }
        }

    }



    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){printf("%d ",a[i][j]);}printf("\n");}

}}
