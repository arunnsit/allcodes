#include<iostream>
#include<string.h>
using namespace std;
int arr[1000009]={0};
int main()
{
	string a;
	int k=0;
	cin>>k;
	cin>>a;
	int x=0,y=0,coun=a[0]-'0',lone=0,l,i;
	long long int sol=0,sol2=0,c2=0;
    for(i=a.length()-1;i>=0;i--)
    {
    	if(a[i]=='1')
    		{l=i;
    			sol2+=(c2*(c2+1))/2;
    			c2=0;
    		}
    		else c2++;
    	arr[i]=l;
    }
    sol2+=(c2*(c2+1))/2;
	while(y!=a.length())
	{
		if(coun==k)
		{
			sol+=arr[x]-x+1;
			y++;
			coun+=a[y]-'0';
		}
		else if(coun<k)
		{
			while(coun<k&&y!=a.length())
			{
				y++;
			    coun+=a[y]-'0';
			}
		}
		else 
		{
			while(coun>k&&x<=y)
			{
               coun-=a[x]-'0';
				x++;
			}
		}
	}
	if(k)
	cout<<sol<<endl;
    else
    	cout<<sol2<<endl;

}