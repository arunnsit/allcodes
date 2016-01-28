#include<iostream>
#include<string.h>
using namespace std;
int main()
{int n,i,j,a[1000],temp=0;
cin>>n;
for(i=0;i<n;i++){cin>>a[i];if(a[i]==0)temp++;}
for(j=0;j<temp;j++)
for(i=1;i<n;i++){if(a[i-1]==0){a[i-1]=a[i];a[i]=0;}}
 for(i=0;i<n;i++){cout<<a[i]<<" ";}
}
