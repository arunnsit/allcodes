#include<stdio.h>
#include<algorithm>
long long int f[1000009]={0};
long long int ma[1000009]={0},u=0;

int main(){
    int n,i,j,sol=0,k=0,l=0,r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){scanf("%d",&j);f[j]++;}
    ma[1]=f[1];
    for(i=2;i<100009;i++){
        ma[i]=std::max(ma[i-1],ma[i-2]+(i)*f[i]);
    }
printf("%I64d\n",ma[100008]);
}
