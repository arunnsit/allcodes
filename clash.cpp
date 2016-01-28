#include<stdio.h>

int main()
{int t,n,b,temp,o,c;
scanf("%d",&t);
while(t)
{scanf("%d",&n);int a[100099][2]={0};o=0;
for(b=0;b<n;b++){scanf("%d",&temp);c=-temp;
if(temp>0){a[temp][0]++;if(a[temp][0]==a[temp][1]){o++;}}
if(temp<0){a[c][1]++;if(a[c][0]==a[c][1]){o++;}}
}
printf("%d\n",o);t--;
}}
