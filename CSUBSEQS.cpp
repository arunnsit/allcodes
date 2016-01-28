#include <iostream>
#include <string.h>
using namespace std;
string a,b,c,d;
long long int dp[52][52][52][52];
int mov[15][4]={
	{1,0,0,0},{0,1,0,0},{0,0,1,0},{0,0,0,1},{1,1,0,0},{1,0,1,0},{1,0,0,1},{0,1,1,0},{0,1,0,1},{0,0,1,1},{1,1,1,0},{1,0,1,1},{1,1,0,1},{0,1,1,1},{1,1,1,1}
};
int coun=0;
long long int solve(int i,int j,int k,int l)
{   
	if(i>=a.length()||j>=b.length()||k>=c.length()||l>=d.length())return 0;
	if(dp[i][j][k][l]!=-9)return dp[i][j][k][l];
	cout<<++coun<<endl;
		cout<<a[i]<<b[j]<<c[k]<<d[l]<<endl;

	if(a[i]==b[j]&&a[i]==c[k]&&a[i]==d[l]){
		cout<<"yo";
		dp[i][j][k][l]=solve(i+1,j,k,l)+solve(i+1,j+1,k+1,l+1);
	}
	else{

		long long int x=0;
		int m=0;
		for(m=0;m<15;m++)
		x+=solve(i+mov[m][0],j+mov[m][1],k+mov[m][2],l+mov[m][3]);
		dp[i][j][k][l]=x;
	}
return dp[i][j][k][l];
}

int main()
{   int i,j,k,l;
	for(i=0;i<52;i++)
		for(j=0;j<52;j++)
			for(k=0;k<52;k++)
				for(l=0;l<52;l++)dp[i][j][k][l]=-9;
	cin>>a>>b>>c>>d;
	cout<<solve(0,0,0,0)<<endl;
}