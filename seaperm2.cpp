#include<stdio.h>
int main(){int t,a[302][302],n,i,j,check;
    scanf("%d",&t);
    while(t){int b[302]={0};
            scanf("%d",&n);check=0;
for(i=0;i<n;i++){
    for(j=0;j<n-1;j++)scanf("%d",&a[i][j]);
}
for(j=0;j<n-1;j++){
        b[a[n-1][j]]++;

}

for(j=0;j<n-1;j++){printf("%d ",a[n-1][j]);}
for(j=1;j<=n;j++){if(b[j]==0){printf("%d\n",j);break;}}


    t--;}
}
