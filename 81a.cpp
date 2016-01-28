#include<iostream>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
	string a,b;
	cin>>a;
	stack<int> s;
	for(int i=0;i<a.length();i++)
	{
		if(!s.empty()&&s.top()==a[i]-'a')
		{
			s.pop();
		}
		else 
			s.push((int)a[i]-'a');
		//cout<<"eha";
	}
	int l=s.size();
	while(!s.empty())
	{
		b.push_back(s.top()+'a');
		s.pop();
		//cout<<"ehaw";
	}
	for(int i=b.length()-1;i>=0;i--)
		cout<<b[i];
	cout<<endl;

}