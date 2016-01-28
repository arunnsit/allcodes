#include<iostream>
using namespace std;
char a[205][205];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,k,i,l,j,dpsol[205][205]={0};
		cin>>n>>m;
		for(i=0;i<n;i++)
			{
				cin>>a[i];
            }
            for(i=0;i<n;i++)
            	for(j=0;j<m;j++)
				{if(a[i][j]=='T')dpsol[i+1][j+1]=1;
				if(a[i][j]=='#')dpsol[i+1][j+1]=-100000000;}
			
		for(i=1;i<=n;i++)dpsol[i][m+1]=-100000000,dpsol[i][0]=-100000000;
		for(i=1;i<=m;i++)dpsol[n+1][i]=-100000000,dpsol[0][i]=-100000000;
		int sol=0;	
		for(i=1;i<=n;i++)
		{   
			if(i%2==0)
			{
				for(j=m;j>=1;j--)
				{
					dpsol[i][j]+=max(dpsol[i-1][j],dpsol[i][j+1]);
					sol=sol<dpsol[i][j]?dpsol[i][j]:sol;
							//	cout<<dpsol[i][j]<<" ";

				}
			}
			if(i%2!=0)
			{
				for(j=1;j<=m;j++)
				{
					if(i==1&&j==1){}
					else dpsol[i][j]+=max(dpsol[i-1][j],dpsol[i][j-1]);
					sol=sol<dpsol[i][j]?dpsol[i][j]:sol;
								//cout<<dpsol[i][j]<<" ";

				}
			}
			//cout<<endl;
		}
		cout<<sol<<endl;

		 
	}

}