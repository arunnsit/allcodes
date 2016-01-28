#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int x,y,n,m,o;
		cin>>n>>m;
		o=m;
		while(m--)
		{
			cin>>x>>y;
		}
		cout<<(n/2)*(n-n/2)-o<<endl;
	}
}