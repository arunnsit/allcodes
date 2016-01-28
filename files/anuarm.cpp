#include<stdio.h>
#include<algorithm>
int a[3];
int main()
{int t,n,m,k,i,l;
scanf("%d",&t);
while(t){int b[200002]={0},ma,to;a[0]=0;a[1]=1000001;
scanf("%d %d",&n,&m);
for(k=0;k<m;k++){scanf("%d",&to);if(a[0]<to){a[0]=to;}if(a[1]>to){a[1]=to;}}
for(k=0;k<n;k++){
    ma=std::max(abs(k-a[1]),abs(k-a[0]));
    printf("%d ",ma);
}
printf("\n");
t--;
}

}
