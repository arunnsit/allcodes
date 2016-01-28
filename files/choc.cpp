#include<stdio.h>
int a,x,y;
int main(){
    int t,n,u,i,j,m,p,ma;long long int sum=0,temp;
    scanf("%d",&t);
    while(t){int c[100003][2]={0};
           scanf("%d %d",&n,&u);ma=0;
    for(i=0;i<u;i++){
        scanf("%d %d %d",&a,&x,&y);
        c[a][0]+=y;
        c[x][1]+=y;
        if(ma<=x)ma=x;
    }sum=0;
    for(i=0;i<=ma;i++){
            sum+=c[i][0];
            c[i][0]=sum;
        if(c[i][1]>0){
            sum-=c[i][1];
        }

    }
    scanf("%d",&m);
    for(j=0;j<m;j++){
        scanf("%d",&p);
        printf("%d\n",c[p][0]);
    }

        t--;
    }
}
