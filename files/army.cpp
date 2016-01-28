#include<stdio.h>
#include<algorithm>
using namespace std;
int k[1000005],l[1000006];
int main()
{int t,n,m,a,b,i,j;
scanf("%d",&t);
while(t)
{scanf("%d %d",&n,&m);i=0;j=0;
for(a=0;a<n;a++){scanf("%d",&k[a]);}
for(a=0;a<m;a++){scanf("%d",&l[a]);}
std::sort(k,k+n);
std::sort(l,l+m);
while(1){if(k[i]>=l[j]){j++;}else{i++;}
if(j==m){printf("Godzilla\n");break;}
else if(i==n){printf("MechaGodzilla\n");break;}}
t--;
}
}
