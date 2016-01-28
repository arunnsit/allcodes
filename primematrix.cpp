#include<stdio.h>
#include<math.h>
int pri[100000]={0},a[1001][1001],b[1001][1001]={0};

int primegen(int n){
    int i,j,d=0,cur=0;
    for(j=2;j<n+100;j++)
    {for(i=2;i<sqrt(j);i++)
    {if(j%i==0){d++;break;}}if(d==0){pri[cur++]=j;}
    }
    return cur;}

int isprime(int n,int p,int q,int cur){
    int i,d=0;

    for(i=2;i<sqrt(n);i++)
    {if(n%i==0){d++;break;}}
    if(d==0){b[p][q]=1;}
    else{b[p][q]=0;}



}





int main()
{int n ,k,i,j,ma=0,cur;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
for(j=0;j<n;j++){scanf("%d",&a[i][j]);if(ma<a[i][j])ma=a[i][j];}
printf("no\n");



}
