#include<iostream>
#include<string.h>
using namespace std;
int main()
{char a[1000];int n,i,j,x,go,gx;cin>>n;x=(n%2==0)?0:1;for(i=0;i<n;i++){a[i]='o';cout<<"o";}cout<<"\n";
go=0;gx=0;
for(j=1;j<n;j++)
if(j<n/2+x){for(i=0;i<j;i++){cout<<a[i];}

for(i=i;i<n-j;i++)
    {if(a[i]=='o'){a[i]='x';cout<<a[i];}
           else{a[i]='o';cout<<a[i];}}
for(;i<n;i++)
    {cout<<a[i];}
cout<<"\n";
}

for(j=n-1;j>0;j--)
if(j<=n/2){for(i=0;i<j;i++){cout<<a[i];}

for(i=i;i<n-j;i++)
    {if(a[i]=='o'){a[i]='x';cout<<a[i];}
           else{a[i]='o';cout<<a[i];}}
for(;i<n;i++)
    {cout<<a[i];}
cout<<"\n";







}}
