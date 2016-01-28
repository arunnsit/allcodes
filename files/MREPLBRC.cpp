#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
string a;

long long int dp[220][220]={0},aps[220]={0},as[220]={0};
long long int solve(int l,int h)
{   if(as[h]>0||as[l]<0)return 0;
    if(h==l+1)
    {
    	if(as[h]==-as[l]&&as[l]!=0)return 1;
    	else if(as[h]==as[l]&&as[l]==0) return 3;
    	else if(as[h]==0||as[l]==0)return 1;
    	else return 0;
    }
    if(l==h)return 0;
    if(l>h) return 1;
    	cout<<"l:"<<l<<" h:"<<h<<endl;

    long long int sol=0,sol_left=0,sol_right=0;
    if(as[l]==-as[h]) 
    for(int i=l+1;i<h-1;i++)
    {   if(as[l]==0&&as[i]==0)
    	sol_left=3*solve(l,i);
    	else if((as[l]==0&&as[i]<0)||(as[i]==0&&as[l]>0))
    	sol_left=solve(l,i);	
        
        if(as[h]==0&&as[i+1]==0)
    	sol_right=3*solve(i+2,h-1);
    	else if((as[h]==0&&as[i+1]>0)||(as[i+1]==0&&as[h]<0))
    	sol_right=solve(i+1,h);

    	sol+=sol_left*sol_right;
    }
    return dp[l][h]=sol;
}
int main()
{
	int n,j,k;
	cin>>n;
	cin>>a;
    for(int i=0;i<a.length();i++)
    {
    	if(a[i]=='{')as[i+1]=1;
    	if(a[i]=='[')as[i+1]=2;
        if(a[i]=='(')as[i+1]=3;
        if(a[i]=='}')as[i+1]=-1;
    	if(a[i]==']')as[i+1]=-2;
        if(a[i]==')')as[i+1]=-3;
    }
	cout<<solve(1,n)<<endl;
}