#include<iostream>
using namespace std;
int main()
{
	long long int i,j,k,l,m,n,a,b,sol=0,c=0;
	long  double x,y;
	cin>>a>>b;
	if(a==b)cout<<"0\n";
	else{i=1;
		while(i<=b)
		{
			x=(b-i)/i;
			m=x;
			if(m*i+i<=b&&m*i+i-1>=a)sol=2*i-1;
			i*=2;
		}
		cout<<sol<<endl;
	}
}