#include<iostream>
#include<string.h>
using namespace std;
int main()
{long long a=0,i,l;char b[100];
cin>>b;l=strlen(b);
for(i=0;i<l;i++){a=a*10+b[i]-48;}cout<<a;

}
