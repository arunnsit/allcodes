#include<stdio.h>
#include<algorithm>
int csum[102]={0},best[102][102]={0},n,g[102];
int sum(int a,int b){
    int sumo=0;
    for(int i=a;i<=b;i++){
            sumo+=g[i];
            sumo%=100;

}return sumo;
}
int solve(int a,int b){
    if(a==b)return 0;
    if(best[a][b]!=-1){
        return best[a][b];
    }
int pt=99999999;
    for(int k=a;k<b;k++){
        int temp=solve(a,k)+solve(k+1,b)+sum(a,k)*sum(k+1,b);
        if(pt>temp)pt=temp;
    }
    best[a][b]=pt;
    return pt;
}
int main(){
    int t,u;int a[102];
    while(scanf("%d",&n)>0){
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++)best[i][j]=-1;
        for(int i=1;i<=n;i++){
            scanf("%d",&g[i]);
            }
        printf("%d\n",solve(1,n));

    }
}
