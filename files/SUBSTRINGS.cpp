#include<iostream>
#include<string.h>
using namespace std;
int main()
{char a[1000]; int l,i,j,k;cin>>a;
l=strlen(a);
for(i=0;i<l;i++)
{
    for(j=i;j<l;j++)
    {
      for(k=i;k<=j;k++)
      {
       cout<<a[k];
      }
cout<<"\n";    }


}
}
