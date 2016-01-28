#include<stdio.h>
#include<algorithm>
int main(){
    int n,m,i,t=2;
    scanf("%d",&n);
    while(n){
    int sum1[10004]={0},sum2[10004]={0},pos[10004]={0},neg[10004]={0},i,j,temp,prev=0,prev2=0,c2,sol=0;
    for(i=1;i<=n;i++){
            scanf("%d",&temp);
            sum1[i]=sum1[i-1]+temp;
            if(temp>=0)pos[temp]=i;
            else neg[-1*temp]=i;
}
scanf("%d",&m);
    for(i=1;i<=m;i++){
                 scanf("%d",&temp);
                 sum2[i]=sum2[i-1]+temp;
                 if(temp>=0){
                    if(pos[temp]){
                            sol+=std::max(sum1[pos[temp]]-sum1[prev],sum2[i]-sum2[prev2]);
                               prev=pos[temp];
                               prev2=i;
                 }}
                 else{
                        if(neg[-1*temp]){
                            sol+=std::max(sum1[neg[-1*temp]]-sum1[prev],sum2[i]-sum2[prev2]);
                               prev=neg[-1*temp];
                               prev2=i;
                 }

                 }

}
sol+=std::max(sum1[n]-sum1[prev],sum2[m]-sum2[prev2]);
printf("%d\n",sol);
scanf("%d",&n);
    }}
