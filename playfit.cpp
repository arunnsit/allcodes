#include<stdio.h>
#include<algorithm>
int main()
{int t,n,i,j,m,a;
scanf("%d",&t);
while(t)
{scanf("%d",&n);int mini=1000009,ans=0;
for(i=0;i<n;i++){scanf("%d",&a);ans=std::max(ans,a-mini);mini=std::min(mini,a);}


if(ans>0){printf("%d\n",ans);}else{printf("UNFIT\n");}



t--;}

}
