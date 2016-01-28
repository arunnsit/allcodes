#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<string.h>
using namespace std;
int dp[150]={0},lmax,lo;
char arr[150];
int dp2[150]={0};
int solve(int n)
{   
	if(n<0)return 0;
	if(dp[n])return dp[n];
	int x=0;
	for(int i=0;i<n;i++)
	if(arr[n]>=arr[i]){
		x=max(solve(i)+1,x);
	}

return dp[n]=x;

}
int print(int n,string st,map<string,int>&map1)
{   //cout<<st<<endl;
	if(st.length()==lmax)
	{ map1[st]++;	
		return 1;
	}
	int x=0;

	for(int i=n+1;i<lo;i++)
	{
		if(n==-1)
		{			st.clear();
			st.push_back(arr[i]);
			x=print(i,st,map1);

		}
		else if(arr[i]>=arr[n])
		{
			st.push_back(arr[i]);
			x=print(i,st,map1);
		}
	}
	return dp2[n]=x;
}
int main()
{
	int i,j,k,t;
	cin>>t;
	while(t--)
	{
    memset(dp,0,sizeof(dp));
    memset(dp2,0,sizeof(dp2));
	cin>>arr;
    lo=strlen(arr);

	arr[lo]='z'+1;
	arr[lo+1]='\0';
   lmax=solve(lo);
  //printf("%d\n",lmax);
   string st;
   map<string,int>map1;
     print(-1,st,map1);
    for (std::map<string,int>::iterator it=map1.begin(); it!=map1.end(); ++it)
    std::cout << it->first <<endl;
}
}