#include<stdio.h>
#include<algorithm>
char a[1000000];
int main(){
    int t,n,i;
    scanf("%d",&t);
    while(t--){
         int neg[100002][2]={0},pos[100002][2]={0},b[100002]={0},ans=0;
         scanf("%d",&n);
         scanf("%s",&a);
         pos[0][0]=1;
         pos[0][1]=-1;
         for(i=0;i<n;i++){
            if(a[i]=='p')b[i]=b[(i-1)<0?0:i-1]+1;
            else if(a[i]=='c')b[i]=b[(i-1)<0?0:i-1]-1;
            else b[i]=b[(i-1)<0?0:i-1];
            if(b[i]<0){
                if(neg[abs(b[i])][0]){
                    ans=(ans>i-neg[abs(b[i])][1])?ans:i-neg[abs(b[i])][1];
                }
                else{
                    neg[abs(b[i])][0]=1;
                    neg[abs(b[i])][1]=i;
                }
            }
            else{
                 if(pos[b[i]][0]){
                    ans=(ans>i-pos[b[i]][1])?ans:i-pos[b[i]][1];
                 }
                 else{
                    pos[b[i]][0]=1;
                    pos[b[i]][1]=i;
                }


            }



         }
         printf("%d\n",ans);
}}
