#include<stdio.h>
#include<algorithm>
using namespace std;
int check=0;
void dfs(int map1[202][202],int visited[202],int curr,int end,int m,int in){
    if(curr==end){
            check=1;
            return;
            }
    for(int i=1;i<=m;i++){
        if(curr!=i&&!check&&!visited[i]&&map1[curr][i]){
            visited[i]=1;
            map1[in][i]=1;
            map1[i][in]=1;
            map1[in][i]=1;
            map1[i][in]=1;
            dfs(map1,visited,i,end,m,in);
        }
        if(check)break;
    }
    return;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
    int n,m,k,map1[202][202]={0},x,y,i,j,input[200009],sol[2][202]={0};
    scanf("%d %d %d",&m,&k,&n);
    for(i=1;i<=k;i++){
        scanf("%d %d",&x,&y);
        map1[x][y]=1;
        map1[y][x]=1;
        map1[x][x]=1;
        map1[y][y]=1;
    }
    for(i=1;i<=m;i++)
     for(j=1+i;j<=m;j++)if(!map1[i][j]){
        int visited[202]={0};
        check=0;
        dfs(map1,visited,i,j,m,i);
        if(check){
            map1[i][j]=1;
            map1[j][i]=1;
            map1[i][i]=1;
            map1[j][j]=1;
        }
     }
     /*for(i=1;i<=m;i++){
        for(j=1;j<=m;j++)
            printf("%d ",map1[i][j]);
            printf("\n");
     }*/

     for(i=1;i<=n;i++){
         scanf("%d",&input[i]);
     }
     for(i=1;i<=n;i++){
            int curr=sol[(i-1)%2][1];
        for(j=1;j<=m;j++){
            curr=min(curr,sol[(i-1)%2][j]);
            if(j==input[i])
                sol[i%2][j]=curr;
            else if(map1[input[i]][j])
                sol[i%2][j]=curr+1;
            else sol[i%2][j]=300009;
        }
     }
     /*for(i=m;i>=1;i--){
        for(j=1;j<=n;j++)
            printf("%d ",sol[j][i]);
            printf("\n");
     }*/
     int ans=3000009;
     for(i=1;i<=m;i++)ans=min(ans,sol[n%2][i]);
     printf("%d\n",(ans>=200003)?-1:ans);
}
}
