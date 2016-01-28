#include<stdio.h>
long long int in[2003][2003]={0},fi[2003][2003]={0};
long long int l[2003]={0},top[2003]={0},right[2003]={0},top2[2003]={0};
int main(){
   long long  int n,i,j;
    scanf("%I64d",&n);
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++){
        scanf("%I64d",&in[i][j]);
        if(i>j){l[i-j+1]+=in[i][j];}
        else{top[j-i+1]+=in[i][j];}
        if(i+j-1<=n){
            top2[i+j-1]+=in[i][j];
        }
        else{
            right[i+j-n]+=in[i][j];
        }
    }
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++){
        if(i>j){fi[i][j]+=l[i-j+1];}
        else{fi[i][j]+=top[j-i+1];}
        if(i+j-1<=n){
            fi[i][j]+=top2[i+j-1]-in[i][j];
        }
        else{
            fi[i][j]+=right[i+j-n]-in[i][j];
        }
    }
    long long int foe[10]={0},fop[10]={0};
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++){if((i+j)%2==0){if(foe[1]<=fi[i][j]){foe[1]=fi[i][j];foe[2]=i;foe[3]=j;}}
                      else{if(fop[1]<=fi[i][j]){fop[1]=fi[i][j];fop[2]=i;fop[3]=j;}

}}
printf("%I64d\n",fop[1]+foe[1]);
printf("%I64d %I64d %I64d %I64d",foe[2],foe[3],fop[2],fop[3]);
}
