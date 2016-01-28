#include<stdio.h>
inline void sor(long long k[5009],long long n){long long a,l,b,temp;l=n;
for(a=0;a<n;a++)
{for(b=1;b<l;b++)
{if(k[b-1]>k[b])
{temp=k[b];
k[b]=k[b-1];
k[b-1]=temp;}
}l--;}
}
int main(){long long k[5009],p,t,n,a,b,c;
scanf("%lld",&t);
while(t){
        scanf("%lld",&n);
for(a=0;a<n;a++){scanf("%lld",&k[a]);}
sor(k,n);p=k[1]-k[0];
for(a=2;a<n;a++){if(p>k[a]-k[a-1]){p=k[a]-k[a-1];}}

printf("%lld\n",p);

t--;}}
