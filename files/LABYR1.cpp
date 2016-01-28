#include<stdio.h>
#include<algorithm>
int e[1001][1001]={0};
int n,m;
int yo=0;
int d[][2]={{0,1},{1,0},{0,-1},{-1,0}};
int dfs(int x,int y){
    e[x][y]=0;
    int i=0;
    //printf("%d %d\n",x,y);
    int w[4]={0};
    for(i=0;i<4;i++){
    int p=x+d[i][0],q=y+d[i][1];
    if(p>=0&&q>=0&&p<n&&q<m&&e[p][q]){
        w[i]=dfs(p,q);
    }
    }
    std::sort(w,w+4);
    yo=yo>w[3]+w[2]?yo:w[3]+w[2];
   //printf("returning:%d yo%d\n",w[3]+1,yo);
    return w[3]+1;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int i,j,f1=-1,f2=-1,s=0;yo=0;
        char temp[1002];
        scanf("%d %d",&m,&n);
        for(i=0;i<n;i++){
        scanf("%s",&temp);
        for(j=0;j<m;j++){
            if(temp[j]=='.'){
                    e[i][j]=1;
                    if(s==0){
                        s=1;
                        f1=i;
                        f2=j;
                    }
            }

        }}
        dfs(f1,f2);
        printf("Maximum rope length is %d.\n", yo);




    }
}
