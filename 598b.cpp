#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
	string a,b;
	int l,r,k,q,t,p,tl;
	cin>>a;
	cin>>k;
	while(k--)
	{
		cin>>l>>r>>q;
        tl=r-l+1;
        l--;r--;
        q=q%tl;
        rotate(a.begin()+l,a.begin()+l+tl-q,a.begin()+r+1);
	}
        cout<<a<<endl;

}