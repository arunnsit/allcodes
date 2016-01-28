#include<stdio.h>
#include<math.h>
int prime[20000000]={0};

int primegen(int pmax,int limit)
{int m,n;int divi;
for(m=prime[pmax]+1;m<=limit;m++)
{divi=0;
for(n=2;n<=sqrt(m);n++){if(m%n==0){divi++;break;}}
if(divi==0){pmax++;prime[pmax]=m;
}}
return pmax;
}

int main()
{int t;int x,y,j,temp,up,coun,pmax,divi;prime[1]=1;prime[2]=2;pmax=2;prime[0]=0;long long int curr;scanf("%d",&t);
while(t)
{scanf("%d %d",&x,&y);temp=0;
if(prime[pmax]<y+100){pmax=primegen(pmax,y+100);}
while(prime[temp]<x){temp++;}
up=temp;coun=0;
while(prime[up]<=y){curr=prime[up];if(curr==1||curr==0){coun++;}
else{if(curr%2==0){curr=curr*curr+1;}else{curr=curr*curr+2;}divi=0;
for(j=2;j<=sqrt(curr);j++){if(curr%j==0){divi++;break;}}
if(divi==0){coun++;}}up++;
}
printf("%d\n",coun);t--;}}
