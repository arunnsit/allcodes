#include<stdio.h>
#include<math.h>
int main()
{int t,j,k,i,c,p,f,n,d[25],pq,x,y,z,check;
scanf("%d",&t);
for(i=0;i<t;i++)
{scanf("%d",&n);
scanf("%d",&c);
for(j=0;j<n;j++)scanf("%d",&d[j]);
check=1;

        pq=pow(2,n);
for(j=0;j<pq;j++){
    x=0;
    for(k=0;k<n;k++){
        if(1&(j>>k)){
            x+=d[k];
        }
    }
    if(x==c){
            check=0;
    printf("Yes\n");
    break;

    }
}
if(check){
        printf("No\n");

}
}}
