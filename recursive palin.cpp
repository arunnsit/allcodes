#include<iostream>
#include<string.h>
using namespace std;

int palin(char x[100],int i,int l)
{if(i>=l){}
else if(x[i]==x[l])return palin(x,i+1,l-1);
else x[i]='6';}

int main()
{char x[100],i,l;
cin>>x;
l=strlen(x);

cout<<palin(x,0,l-1);


}
