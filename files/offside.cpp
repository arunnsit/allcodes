#include<stdio.h>
int main()
{int m,n,i,a,p,q,pos=0,b[10008];
scanf("%d%d",&m,&n);
while(m!=0&&n!=0)
{a=q=112345;
for(i=0;i<m;i++){scanf("%d",&p);if(p<a){a=p;}}
for(i=0;i<n;i++){scanf("%d",&b[i]);if(q>=b[i]){pos=i;q=b[i];}}
b[pos]=12121212;q=12121212;
for(i=0;i<n;i++){if(q>=b[i]){q=b[i];}}
if(q>a){printf("Y\n");}
else{printf("N\n");}
scanf("%d%d",&m,&n);
}
}
