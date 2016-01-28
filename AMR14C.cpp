#include<stdio.h>
#include<algorithm>
int main(){
    int t,n,m,x,i,j,a[100005],temp,k;long long int c=0;
    scanf("%d",&t);
    while(t--){
                   int map1[200005]={0},map2[200005]={0};k=-1;
       scanf("%d %d %d",&n,&m,&x);
       for(i=0;i<n;i++){
            scanf("%d",&temp);
            temp=temp%m;
            a[i]=temp;
            map1[temp]++;
       }
       map2[0]=map1[0];c=0;k=n;
       for(i=1;i<=2*m;i++){map2[i]=map2[i-1]+map1[i];}
for(i=0;i<k;i++){
    if(a[i]>x){
        c+=(map2[m+x-a[i]]-map2[m-a[i]-1]);
    }
    else{
        c+=map2[x-a[i]]+map2[m+x-a[i]]-map2[m-a[i]-1];
    }
}
printf("%lld\n",c);

    }
}
