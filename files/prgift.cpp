#include<stdio.h>
int main(){
    int t,n,k,in,ev,od,i;
    scanf("%d",&t);
    while(t){ev=0;od=0;
        scanf("%d %d",&n,&k);
        for(i=0;i<n;i++){
            scanf("%d",&in);
            if(in%2==0)ev++;
            else od++;
        }
        if(ev>=k &&k!=0){printf("YES\n");}
        else if(k==0&&od>0){printf("YES\n");}
        else {printf("NO\n");}
    t--;}
}
