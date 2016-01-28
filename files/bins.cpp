#include<stdio.h>
/*long long int p[10004][10004]={0},b;
inline int s(long long m,long long n)
{if(n==m){return 1;}
if(n<m){return 0;}
if(n==0){return 0;}
if(m==0){return 0;}
else if(n<10000&&m<10004&&p[m][n]!=0){return p[m][n];}
else
b=(n*s(m-1, n) + s(m-1, n-1))%2;
if(n<10000&&m<10004)p[m][n]=b;
return b;
*/
int main()
{int t, m,n,a;
scanf("%d",&t);
while(t)
{scanf("%d %d",&m,&n);
printf("%d\n",!((m - n) & ((n- 1)/2)));
t--;

}

}
