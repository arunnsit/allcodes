#include<stdio.h>
#include<algorithm>
int main()
{long long int t,n,k,te,i;
scanf("%lld",&t);
while(t)
{long long int a[100009];long long int sum=0,bac=0,curr;
scanf("%lld %lld",&n,&k);
for(i=0;i<k;i++){scanf("%lld",&a[i]);}i=1;
std::sort(a,a+k);
for(i=0;i<k;i++){
        curr=(a[i]*(a[i]-1))/2;
curr=curr-bac;
if(curr<a[i]){curr=a[i];break;}
bac+=a[i];
}
if(i==k){curr=(n*(n+1))/2;curr-=bac;curr++;}

if(curr%2==0){printf("Mom\n");}
else{printf("Chef\n");}

t--;}

}
