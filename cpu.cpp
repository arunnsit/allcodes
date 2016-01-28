#include<stdio.h>
#include<math.h>
long long prime[20000000]={0},factor[20000000]={0};

long long int primegen(long long int pmax,long long int limit)
{long long int m,n;int divi;
for(m=prime[pmax]+1;m<=limit;m++)
{divi=0;
for(n=2;n<=sqrt(m);n++){if(m%n==0){divi++;break;}}
if(divi==0){pmax++;prime[pmax]=m;
}}
return pmax;
}


int main()
{int t;long long int x,y,j,curr,cur,pmax=2,divi,k,a,fmax,b,coun,boss,di;prime[0]=2;prime[1]=3;prime[2]=5;factor[0]=1;
scanf("%d",&t);
while(t)
{scanf("%lld %lld",&x,&y);
for(curr=x;curr<=y;curr+=3)
{boss=0;
if(prime[pmax]<curr/2){pmax=primegen(pmax,curr/2);}j=0;cur=curr;fmax=1;divi=0;
while(cur>1&&prime[j]<=curr/2&&j<=pmax){if(cur%prime[j]==0){cur=cur/prime[j];factor[fmax]=prime[j];fmax++;if(factor[fmax-1]==factor[fmax-2]){boss=1;break;}}
else{j++;}}

for(j=2;j<=sqrt(curr);j++){if(curr%j==0){divi++;break;}}
if(divi==0){factor[fmax]=curr;}
else{fmax--;}coun=0;j=1;di=0;
if(boss==0&&fmax>=3){
for(a=1;a<=factor[fmax];a++)
 {for(b=1;b<=factor[fmax];b++)
 {if(factor[fmax]==factor[fmax-1]*a+b){di=1;break;}if(factor[1]<factor[0]*a+b){break;} }
 if(di==1){break;}}
while(j<=fmax){if(factor[j]==factor[j-1]*a+b){coun++;}j++;}
if(coun==fmax){printf("%lld\n",curr);}
}




}
t--;}

}
