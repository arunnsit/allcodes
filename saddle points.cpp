#include<iostream>
#include<string.h>
using namespace std;
int main()
{int i,j,a[100][100],m,n,k,l,check1,check=1,check2;
cin>>m>>n;
for(i=0;i<m;i++)
for(j=0;j<n;j++)
{cin>>a[i][j];}

for(i=0;i<m;i++)
for(j=0;j<n;j++)
{check1=0;check2=0;
for(k=0;k<m;k++){if(a[i][k]<=a[i][j]&&k!=j){check1=1;}}

for(k=0;k<m;k++){if(a[k][j]>=a[i][j]&&k!=i){check2=1;}}
if(check1&&check2){cout<<"x:"<<j+1<<" y:"<<i+1<<"\n";check=0;}
}
if(check){cout<<"no saddle points found";}}
