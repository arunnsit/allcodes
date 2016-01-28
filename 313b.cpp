#include<iostream>
#include<string.h>
using namespace std;
long long int b[1000000]={0};
int main()
{
	string a;
	cin>>a;
	for(int i=1;i<a.length();i++)
	if(a[i]==a[i-1]){
		b[i]=b[i-1]+1;
	}
	else b[i]=b[i-1];
	int m,x,y;
	cin>>m;
	while(m--)
	{
		cin>>x>>y;
		x--;
		y--;
		
		cout<<b[y]-b[x]<<endl;
	}
}