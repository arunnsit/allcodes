#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,d,e,i;
	cin>>a>>b;
	while(a!=-1&&b!=-1)
	{
		long long int fac=1;
		for(i=a+1;i<=a+b;i++)fac*=i;
        for(i=1;i<=b;i++)fac/=i;
        if(fac==a+b)cout<<a<<"+"<<b<<"="<<a+b<<endl;
        else cout<<a<<"+"<<b<<"!="<<a+b<<endl;	
        cin>>a>>b;
	}
}