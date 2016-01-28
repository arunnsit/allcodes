#include<stdio.h>
long long int a[100008],b[100008],c[100008],d[100008],f[100008],g[100008],sum=0,sum2=0,y;
int main()
{int n,i,j,q,l,r,e[100008][2],type,x;
scanf("%d",&n);
for(i=0;i<n;i++){scanf("%lld",&a[i]);sum+=a[i];}b[0]=a[0];c[n-1]=a[n-1];
for(i=1;i<n;i++){b[i]=b[i-1]+a[i];c[n-i-1]=c[n-i]+a[n-i-1];}


for(i=0;i<n;i++){
    scanf("%d %d",&l,&r);l--;e[i][0]=l;e[i][1]=r;
    d[i]=sum-b[l-1]-c[r];sum2+=d[i];//printf("d[%d] :%d\n",i,d[i]);
    if(i){f[i]=d[i]+f[i-1];}
    else{f[i]=d[i];}

}g[n-1]=d[n-1];
for(i=n-2;i>=0;i--){
    g[i]=d[i]+g[i+1];
}
//printf("%lld\n",sum);


scanf("%d",&q);
for(i=0;i<q;i++){
        scanf("%d",&type);long long int u=0;
if(type==1){
    scanf("%d %lld",&x,&y);x--;
    for(j=0;j<n;j++){
        if(x>=e[j][0]&&x<e[j][1]){
            u=u-a[x]+y;
        }
            f[j]+=u;  }u=0;
    for(j=n-1;j>=0;j--){
        if(x>=e[j][0]&&x<e[j][1]){
            u=u-a[x]+y;
        }
        g[j]+=u;
    }
    sum2=sum2+u;
a[x]=y;
}
else{
    scanf("%d %lld",&x,&y);x--;
    printf("%lld\n",sum2-f[x-1]-g[y]);
}


}


}
