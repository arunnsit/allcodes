#include<stdio.h>
char a[30007];
int main(){int y=10;
while(y--){
    int n,m,i,j,pos[30007]={0},t,lo=0,ro=0,wa=0,sum=0;
    scanf("%d %s %d",&n,&a,&m);
    for(i=0;a[i]!='\0';i++){
        if(sum==0&&a[i]==')'){pos[i]=1;wa++;}
        if(a[i]=='('){sum++;ro++;}
        if(a[i]==')'){sum--;lo++;}
    }

    while(m--){
        scanf("%d",&t);
        if(t){
            if(a[t-1]=='('){
                sum-=2;
                ro--;
                lo++;
               }
            else{
                sum+=2;
                ro++;
                lo--;
                if(pos[t-1]){
                    pos[t-1]=0;
                    wa--;
                }
            }
        }
        else{
            if(!wa&&!sum&&lo==ro){
                printf("YES\n");
            }
            else printf("NO\n");
        }
    }
}}
