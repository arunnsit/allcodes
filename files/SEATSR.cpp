#include<iostream>
#include<algorithm>
#include<string.h> 
using namespace std;
int dp[100007][206]={0},x,y,k,ma=0,lm;
string a,b,c;

int main()
{
	std::ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		memset(dp,0,sizeof(dp));
	cin>>a>>b;
    if(a.length()>b.length())
    {
    	c=a;
    	a=b;
    	b=c;
    }
	cin>>x>>y>>k;
    int sl=0;
	if(x==0)
		 cout<<0<<endl;
	else {
		ma=k/x;
		int delta=102;
			
		int sol=100000000;
		for(delta=0;delta<=204;delta++)
			dp[0][delta]=abs(delta-102)*x;
		    dp[0][102]=0;
		for(int i=1;i<=a.length();i++)
		{ 
			for(delta=0;delta<=204;delta++)
			{   
				
				if(i-1+delta-102>=0&&i-1+delta-102<b.length()&&a[i-1]==b[i-1+delta-102])
				{   
					dp[i][delta]=dp[i-1][delta];
				}
				else
				{   

					dp[i][delta]=dp[i-1][delta]+y;
					if(delta!=201)
						dp[i][delta]=min(dp[i][delta],dp[i-1][delta+1]+x);
					if(delta!=0)
						dp[i][delta]=min(dp[i][delta],dp[i][delta-1]+x);
						//cout<<"a:"<<dp[i][delta]<<endl;
				}
				if(i==a.length()&&i+delta-102==b.length())
					{
						sol=min(sol,dp[i][delta]);
						//cout<<"i:"<<i<<" del:"<<delta<<" sol:"<<sol<<endl;
					}
				
			}
		}
		if(sol>k)
		cout<<-1<<endl;
	    else cout<<sol<<endl;
	}

    }
}