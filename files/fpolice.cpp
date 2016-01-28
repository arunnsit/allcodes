#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int op;
struct node{
	int ti,rs;
};
node dp[105][260];
node solve(int n,int t,int tim[105][105],int risk[105][105])
{ 	
    node tmp;
	if(t<0){
         tmp.ti=100000000;
         tmp.rs=100000000;
		return tmp;
	}
	if(n==0){
		tmp.ti=t;
		tmp.rs=0;
		return tmp;
	}
	if(dp[n][t].rs!=-1)return dp[n][t];
	node x;
	x.ti=100000000;
	x.rs=100000000;
	node y;
	for(int i=0;i<=op;i++)
	{
		if(i!=n)
		{
			y=solve(i,t-tim[n][i],tim,risk);
            if(x.rs>y.rs+risk[n][i]||(x.rs==y.rs+risk[n][i]&&x.ti>y.ti)){
            	x=y;
            	x.rs+=risk[n][i];
            }
		}
	}
	//cout<<"n:"<<n<<"t:"<<t<<" "<<x.rs<<endl;
	return dp[n][t]=x;
}
int main()
{
	int top;
	cin>>top;
	while(top--)
	{   memset(dp,-1,sizeof(dp));
		int n,m,i,j,k,l,t;
		cin>>n>>t;
				op=n-1;					
		int tim[105][105]={0},risk[105][105]={0};
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>tim[i][j];
        for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				cin>>risk[i][j];
		int tip=0;
		solve(n-1,t,tim,risk);
		if(dp[n-1][t].rs<100000000&&dp[n-1][t].ti<=t)	
		cout<<dp[n-1][t].rs<<" "<<t-dp[n-1][t].ti<<endl;
	    else cout<<-1<<endl;
		
	}
}