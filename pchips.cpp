//2 WAs missed endl
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,i,j,k,a[1000];
	cin>>t;
	while(t--)
	{
		cin>>n;

		
		int sol=0,msol=5000000,x=0,cs=0,ms=0;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
				cs+=a[i];
			}
		for(i=0;i<=50;i++)
		{   
			x=i;
			ms=0;
			sol=0;
			for(j=0;j<n;j++)
			{   
				sol+=abs(x-a[j]);
				ms+=x;
				x++;
			}
			if(ms==cs)
			msol=min(msol,sol/2);
		}
		if(msol==5000000)
			cout<<-1<<endl;
		else cout<<msol<<endl;
	}

}