#include<iostream>
#include<iomanip>
using namespace std;
long double dp[1003][1003][3]={0};
long double solve(int w,int b,int prev)
{
	if(!w&&!b)
		return 0;
	if(w<0||b<0)
		return 0;
	if(dp[w][b][prev])
		return dp[w][b][prev];
        long double sol=0;
        long double x=((long double)b/(w+b)),y=((long double)w/(w+b));
    if(prev==1)
    {   if(w+b==1)return 0;
    	long double o=(long double)(w)/(w+b-1),v=(long double)(b-1)/(w+b-1);
    	sol=solve(w-1,b-1,2)*x*o+solve(w,b-2,2)*x*v;
    }
    else
    {
    	sol=solve(w,b-1,1)*x+y;
    }
   //  cout<<sol<<endl;
    return dp[w][b][prev]=sol;
}
int main()
{
	int w,b;
	cin>>w>>b;
	cout<<fixed<<setprecision(11);
	cout<<solve(w,b,0)<<endl;
}