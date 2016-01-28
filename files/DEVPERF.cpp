#include<iostream>
#include<algorithm>
using namespace std;
char a[1006][1006];
int main()
{
	int t;
	std::cout.sync_with_stdio(false);
	cin>>t;
	while(t--)
	{   
		int n,m,i,j,k;
		cin>>n>>m;
		for(i=0;i<n;i++)
			cin>>a[i];
		int lmax=1009,rmax=0,topmax=1009,lowmax=0,c=0;
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(a[i][j]=='*')
				{
					lmax=min(lmax,j);
					rmax=max(rmax,j);
					topmax=min(topmax,i);
					lowmax=max(lowmax,i);
					c=9;
				}
		if(c)		
		cout<<1+max((rmax-lmax+1)/2,(lowmax-topmax+1)/2)<<endl;		
	    else cout<<0<<endl;
	}
}