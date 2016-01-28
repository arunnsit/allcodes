#include<stdio.h>
#include<algorithm>
int h[1002]={0},b[1002][2]={0},w[1002]={0};
int main()
{int n,i,temp,temp2,l,l2,log;scanf("%d",&n);
for(i=0;i<n;i++){scanf("%d %d",&h[i],&w[i]);}b[0][0]=w[0];b[0][1]=h[0];
for(i=1;i<n;i++){b[i][0]=std::max(b[i-1][1]+w[i]+abs(h[i]-w[i-1]),b[i-1][0]+w[i]+abs(h[i]-h[i-1]));
b[i][1]=std::max(b[i-1][1]+h[i]+abs(w[i]-w[i-1]),b[i-1][0]+h[i]+abs(w[i]-h[i-1]));}
printf("%d\n",std::max(b[n-1][0],b[n-1][1])
);
}
