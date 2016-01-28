#include<stdio.h>
#include<algorithm>
long long b[20000003]={0};
inline long long coin(long long a)
{long long ret;
if(a<12){return a;}
if((a<20000000)&&(b[a]!=0)){return b[a];}
else {ret=std::max(a/2,coin(a/2))+std::max(a/3,coin(a/3))+std::max(a/4,coin(a/4));
if((a<20000000)){b[a]=ret;}
return ret;}}


int main()
{long long a;int t=10;
while(t){scanf("%lld",&a);
printf("%lld\n",coin(a));t--;}
return 0;
}
