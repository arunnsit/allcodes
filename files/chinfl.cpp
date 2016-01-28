#include<iostream>
#include<iomanip>
#include<string.h>
#include<algorithm>
using namespace std;
long double edges[1005][3005]={0.0};
long double dp[1005][3005][2]={0.0},op=1000000000000000000.0000000,D;
long long int n,mo;
int ch=0;
long double solve(int m,int p,int prev)
{   if(ch==1)
	return 0;
		if(m<=0&&prev==0)
		return D;
	if(p<=0||p>n)
	    return 0;

	if(m<=0)
		return 0;
	if(dp[m][p][prev]!=0)
		return dp[m][p][prev];
	long double sol=0;
		
			if(prev==0)
				sol=max(max(sol,solve(m-1,p,1)/edges[p][2*(mo-m+1)-1]),max(solve(m-1,p,0),max(solve(m-1,p-1,0),solve(m-1,p+1,0))));
			if(prev==1)
				sol=max(max(sol,solve(m-1,p,0)*edges[p][2*(mo-m+1)]),max(solve(m-1,p,1),max(solve(m-1,p-1,1),solve(m-1,p+1,1))));
		    if(sol>op)ch=1;
		return dp[m][p][prev]=sol;
}
int main()
{
	int i,j,k,l,m;
	cin>>n>>m>>D;
	mo=m;
	for(i=1;i<=n;i++)
		for(j=1;j<=2*m;j++)
			cin>>edges[i][j];
    long double sol=1.0000000;
    cout<<fixed;
	for(i=1;i<=n;i++)
		sol=max(sol,solve(mo,i,0));
	if(ch==1)
		cout<<"Quintillionnaire\n";
	else
	cout<<setprecision(10)<<(sol)<<endl;
}