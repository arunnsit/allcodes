#include<iostream>
using namespace std;
void waveprin(int a[100][100],int m,int n)
{int i, j;
    for(i=0;i<m;i++)
    {for(j=0;j<n;j++){if(j%2==0){cout<<a[i][j]<<" ";}else{cout<<a[m-i-1][j]<<" ";}}cout<<"\n";
}}
int main()
{int n,m,i,j,a[100][100];
cin>>m>>n;
for(i=0;i<m;i++)
for(j=0;j<n;j++){cin>>a[i][j];}
    waveprin(a,m,n);
}
