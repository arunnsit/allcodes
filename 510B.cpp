#include<stdio.h>
int max(int z,int y){
return z>y?z:y;}
int n,m,p,b,c,d,R=0;
char a[500][500];
int visited[500][500]={0};
int dfs(int x,int y,int fromx,int fromy,char color){
    p=0,b=0,c=0,d=0;
    if(x<0||y<0||x>=n||y>=m)return 0;
    if(a[x][y]!=color)return 0;
    if(visited[x][y]){

           // printf("%d %d\n",fromx,fromy);
            R=1;
        return 1;
    }
    visited[x][y]=1;
   if(x+1==fromx&&y==fromy){}
   else{p=dfs(x+1,y,x,y,color);}
   if(x==fromx&&y+1==fromy){}
   else{b=dfs(x,y+1,x,y,color);}
   if(x-1==fromx&&y==fromy){}
   else{c=dfs(x-1,y,x,y,color);}
   if(x==fromx&&y-1==fromy){}
   else{d=dfs(x,y-1,x,y,color);}

    return max(max(p,b),max(d,c));
}
int main(){
    int i,j,ch=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++){
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(!visited[i][j]){
                dfs(i,j,-1,-1,a[i][j]);
            }
        }
    }
    if(R)printf("Yes\n");
    else printf("No\n");

}
