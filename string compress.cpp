#include<iostream>
#include<string.h>
using namespace std;
int main()
{int i,j,k,l,b;char a[100];
cin>>a;
l=strlen(a);
for(i=1;i<l;i++){cout<<a[i-1];b=0;while(a[i]==a[i-1]){b++;i++;}cout<<b+1;}


}
