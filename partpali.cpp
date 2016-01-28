#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
long long int m,s,pop=0;
long long int dp[1002][25]={0};
long long int poten[35]={0};

long long int solve(long long int mod,long long int l)
{   //cout<<"m:"<<mod<<" l:"<<l<<endl;
	if(mod==0&&l==s)
		return 1;
	if(l>=s)
		return 0;
	if(dp[mod][l]!=-1)
		return dp[mod][l];
    long long int sol=0;
	if(l==s-2)
	{
		for(long long int i=1;i<=9;i++)
		{
			sol+=solve(((i*poten[l+1])%m+(mod*10)%m+i)%m,l+2);
		}
	}
	else
	{
		for(long long int i=0;i<=9;i++)
		{
			sol+=solve(((i*poten[l+1])%m+(mod*10)%m+i)%m,l+2);
		}

	}
	return dp[mod][l]=sol;
}
int main()
{
	long long int t,i,j,k,l,n;
	cin>>t;
	while(t--)
	{   memset(dp,-1,sizeof(dp));
		cin>>m>>s;
		poten[0]=1;
    
		for(i=1;i<35;i++)
			poten[i]=(poten[i-1]*10)%m;
        if(s==1)
        {
        	long long int sol=0;
			s--;
			for(i=1;i<=9;i++)
			if(i%m==0)sol++;
		    cout<<sol<<endl;
        }
		else if((s&1)==1)
		{
			long long int sol=0;
			for(i=0;i<=9;i++)
			{
				sol+=solve(i%m,1);
			}
			cout<<sol<<endl;
		}
		else
		{   
			cout<<solve(0,0)<<endl;
		}
	}

}