#include<stdio.h>
int ma[2002][2002]={0};
int p=0;
int bfs(int visit[2002],int n,int frm,int col){
    int i;
    if(visit[frm]){
        if(visit[frm]!=col%2)p=1;
        //printf("problem:%d",frm);
        return 0;
    }
    else visit[frm]=col;
    for(i=1;i<=n;i++){
        if(ma[frm][i]){visit[i]=col;}
    }
    for(i=1;i<=n;i++){
        if(ma[frm][i]){
            bfs(visit,n,i,col+1);
        }
    }
}
int main(){
    int t,k;
    scanf("%d",&t);
    for(k=1;k<=t;k++){
       int visit[2002]={0},n,m,i,j,o,p2;
       scanf("%d %d",&n,&m);p=0;
       for(i=0;i<=n;i++)
        for(j=0;j<=n;j++)ma[i][j]=0;
       while(m--){
        scanf("%d %d",&o,&p2);
        ma[o][p2]=1;
       }
       for(i=1;i<=n;i++){
        if(!visit[i]){
            bfs(visit,n,i,0);
        }
       }
       printf("Scenario #%d:\n",k);
       if(p)printf("Suspicious bugs found!\n");
       else printf("No suspicious bugs found!\n");
    }
}
