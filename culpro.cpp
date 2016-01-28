#include<stdio.h>
#include<algorithm>
int k[10000005][2]={0};
int main(){
    int n,i,a,b,ma=0,ca,ans;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {scanf("%d %d",&a,&b);
    k[a][0]=a;
    k[b][1]=b;
    ma=std::max(b,ma);}ca=0;ans=0;
    for(i=0;i<=ma;i++){
        if(k[i][0]>0){
            ca++;
        }
        if(k[i][1]>0)ca--;
        ans=std::max(ca,ans);
    }
printf("%d\n",ans);

}
