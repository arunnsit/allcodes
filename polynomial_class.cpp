#include<iostream>
#include<algorithm>
using namespace std;
int arr[10000]={0};
int main()
{
	int a,b,tmp,i;
	cout<<"enter degree of a:";
	cin>>a;
	cout<<"enter degree of b:";
	cin>>b;
	cout<<"for a:"<<endl;
	for(i=0;i<=a;i++)
	{   
		cout<<"enter coefficient for x^"<<i<<":";
		cin>>tmp;
		arr[i]+=tmp;
	}
	cout<<"for b:"<<endl;
	for(i=0;i<=b;i++)
	{   
		cout<<"enter coefficient for x^"<<i<<":";
		cin>>tmp;
		arr[i]+=tmp;
	}
	for(i=0;i<=max(a,b);i++)
		cout<<arr[i]<<"x^"<<i<<"+";cout<<endl;

}
