#include<stdio.h>
int a[10000009];
int main(){
    long long int p,ans,fans,k,y, n,m,i;
    scanf("%lld %lld",&n,&m);a[0]=1;
    for(i=1;i<=m+2;i++){
        k=((a[i-1]%m)*(i%m))%m;
        a[i]=k;
    }
    fans=0;
    for(i=1;i<=n;i++){
        scanf("%lld",&p);
        if(p%2==0){k=p/2;y=p+1;}
        else{k=p;y=(p+1)/2;}

        ans=((a[(p<m)?p+1:m+1]-1)%m+(((((p%m)*(k%m))%m)*(y%m))%m))%m;
        fans=((fans%m)+(ans%m))%m;
    }
            printf("%lld\n",fans);

}
