//alpha coder
#include<stdio.h>
int main(){p
    int n,k,a[100008]={0},i,j,ones=0,tprimes=0,primesc,temp,pri[100008]={0},nons=0;long long int ans=0;
    for(i=2;i<=1000;i++){
            if(a[i]==0)
        for(j=2*i;j<=100008;j+=i){
            a[j]++;
        }
    }
scanf("%d %d",&n,&k);
for(i=0;i<n;i++){
    scanf("%d",&temp);
    if(temp==1)ones++;
    else if(a[temp]==0){
        tprimes++;
        pri[temp]++;
    }
    else nons++;
}
primesc=tprimes;
if(k==1)printf("%d\n",ones);
if(k==2){
    ans+=ones*(nons+tprimes+ones-1);
    for(i=2;i<=100000;i++){
        if(pri[i]>0){
            ans+=pri[i]*(primesc-pri[i]);
            primesc-=pri[i];
            ans+=pri[i]*nons;
        }
    }
    printf("%lld\n",ans);
}
if(k==3){
        ans+=ones*(ones+nons+tprimes-1)*(ones+nons+tprimes-2);


}
}
