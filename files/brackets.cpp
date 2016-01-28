#include<stdio.h>
#include<math.h>
int main(){
    long long int n,i,j,s,a[100],p,coun=0;long long int w=0;
    scanf("%lld",&n);
    for(i=0;i<n;i++)scanf("%lld",&a[i]);
    p=pow(2,n);
     for(i=0;i<p;i++){int b[100],cur=0,en,w=0;
        for(j=0;j<n;j++)
        {if(1&(i>>j)){b[cur++]=a[j];w+=a[j];}}j=0;en=cur-1;
if(w==0){while(1)
{if(b[j]==-1*b[j+1]&&b[j]<0)j+=2;
else if(b[j]==-1*b[en]&&b[j]<0){en--;j++;}
  else break;
}
if(j>en&&(cur)%2==0){coun=coun%1000000007+1;}

    }}
    printf("%lld\n",coun);}
