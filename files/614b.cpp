#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int check(string a)
{   
	int l=0,ones=0;
	for(int i=a.length()-1;i>=0;i--)
	{
		if(a[i]=='0')
		l++;
		else if(a[i]=='1')
		ones++;
		else
		return -1;	
	}
	if(ones==1&&l==(a.length()-1))
		return l;
	if(ones>1)
		return -1;
	if(l==a.length())
		return -2;
	return 0;
}
int main()
{
	long long int x,y,n,i,j,k,l=0,sp=0,answer=1,ch=0;
	string s,ms;
	ms.push_back('1');
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>s;
		y=check(s);
		//cout<<"y:"<<y<<endl;
		if(y>=0)
			l+=y;
		else if(y==-2){
			answer=0;
			ch=1;
		}
		else 
		{
			ms=s;
		}
	}
	if(ch)
		cout<<0<<endl;
	else
	{
		cout<<ms;
		for(i=0;i<l;i++)
			cout<<0;
		cout<<endl;
	}

}