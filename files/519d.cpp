#include<iostream>
#include<string.h>
#include<unordered_map>
#include<utility>
using namespace std;
string a;
long long int c[30];
unordered_map<long long int,int> b[26];
int main()
{
	int n,i,j,k;
	long long int sum=0,sol;
    for(i=0;i<26;i++)
    	cin>>c[i];
    cin>>a;
    for(i=0;a[i]!='\0';i++)
    {   
    	sol+=b[a[i]-97][sum];
    	sum+=c[a[i]-97];
    	b[a[i]-97][sum]++;
    }
    cout<<sol;
}