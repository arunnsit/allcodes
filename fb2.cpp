#include<stdio.h>
#include<math.h>
int main()
{int t,j,k,i,c[25],p[25],f[25],n[25],d[25][25][5],pq,x,y,z,check;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d %d %d",&c[i],&p[i],&f[i]);
scanf("%d",&n[i]);
for(j=0;j<n[i];j++)scanf("%d %d %d",&d[i][j][1],&d[i][j][2],&d[i][j][3]);
}
for(i=0;i<t;i++){check=1;

        pq=pow(2,n[i]);
for(j=0;j<pq;j++){
    x=0;y=0;z=0;
    for(k=0;k<n[i];k++){
        if(1&(j>>k)){
            x+=d[i][k][1];
            y+=d[i][k][2];
            z+=d[i][k][3];
        }
    }
    if(x==c[i]&&y==p[i]&&z==f[i]){
            check=0;
    printf("Case #%d: yes\n",i+1);

    }
}
if(check){
        printf("Case #%d: no\n",i+1);

}
}}
