#include<stdio.h>
int main()
{long long int t,n,m,j,i,ans,te,te2,a[100][100];
scanf("%lld %lld",&m,&n);long long int b[100]={0};ans=1;
    for(i=0;i<m;i++)
for(j=0;j<n;j++){
    scanf("%lld",&a[i][j]);
}
for(j=0;j<n;j++)
for(i=0;i<m;i++)
{b[j]+=a[i][j];
}
for(j=0;j<n;j++)
{
    ans=(ans*b[j])%10000007;
}
printf("%lld\n",(ans<0)?(10000007+ans):ans);}
