#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
long long int powa(long long int a,long long int b)
{if(b==0)return 1;
	else return a*powa(a,b-1);

}
int main()
{
	long long int  n,t;
	cin>>t;
	cout<<fixed;
	while(t--){
		cin>>n;
	cout<<setprecision(0)<<((n*(n+1))/2)-2*(powa(2,floor(log2(n))+1)-1)<<endl;
}

}