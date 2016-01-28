#include<stdio.h>
int has[3000009]={0};
int main(){
    int n,i,j,k;long long int sol=0,prev=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&k);has[k]++;}
    for(i=1000009;i>0;i--){
            if(has[i]){
                    has[i]+=has[i+1];
        if(prev&&has[i]>=2){
            sol+=prev*i;
            prev=0;
            has[i]-=2;
        }
        if(has[i]>=4){
            sol+=(has[i]/4)*(i*i);
            has[i]=has[i]%4;
        }
        if(has[i]>=2){
            if(prev==0){prev=i;}
            else{sol+=prev*i;prev=0;}
            has[i]-=2;
        }
    }}
    printf("%I64d\n",sol);
}
