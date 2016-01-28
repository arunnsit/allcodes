#include<iostream>
#include<stdio.h>

using namespace std;
int main()
{
	int t;
	std::cout.sync_with_stdio(false);
	cin>>t;
	while(t--)
	{   int n;
		long long int sol,series,x,y,curr,curr2,mod=1000000007;
		cin>>n;
		cin>>x;
		cin>>y;
		sol=(2*x*y)%mod;
		series=(x+y)%mod;
		curr2=1;
		for(int i=1;i<n;i++)
		{
			cin>>curr;
			sol=((2*sol)%mod+(((2*curr)%mod)*(series%mod))%mod)%mod;
			curr2=(curr2*2)%mod;
			series=(series+(curr2*curr)%mod)%mod;
		}
		cout<<sol%mod<<endl;

	}
}