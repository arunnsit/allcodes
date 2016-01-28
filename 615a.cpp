#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,m,x,y;
	cin>>m>>n;
		int tmp[1000]={0};
	for(i=0;i<m;i++)
	{
		cin>>x;
		for(j=1;j<=x;j++)
			{
				cin>>y;
				y--;
				tmp[y]++;
			}
	}
	
	int c=0;
	for(i=0;i<n;i++)
		if(tmp[i])c++;
	if(c==n)
		cout<<"YES\n";
	else cout<<"NO\n";

}