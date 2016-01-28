#include<iostream>
using namespace std;
int main()
{int row=1,p=1,c=1,k;cin>>k;
while(row<=k)
{p=1;c=row;while(p<=k-row){p++;cout<<" ";}
while(p<=k){cout<<c;c++;p++;}c=c-2;p=c;
while(p>=row){cout<<p;p--;}cout<<"\n";row++;}
return 0;}
