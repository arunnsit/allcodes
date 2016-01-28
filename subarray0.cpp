#include<iostream>
#include<string.h>
using namespace std;
int main()
{int a[1000]; int l,i,j,n,sum=0,k;cin>>n;
for(i=0;i<n;i++){cin>>a[i];}

for(i=0;i<n;i++)
{
    for(j=i;j<n;j++)
    {sum=0;
      for(k=i;k<=j;k++)
      {
       sum+=a[k];
      }
if(sum==0){cout<<"the subarray is\n";for(k=i;k<=j;k++){cout<<a[k]<<" ";} cout<<"\n";   }}

}
}
