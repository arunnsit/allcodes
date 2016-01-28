#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<vector>
using namespace std;
long long int roop[100009]={0},roop_val,vis[100009]={0},vis2[100009]={0},mod=1000000007,sol[100009]={0};
 vector<long long int> v[100008],weigh[100008];

long long int solve(int start)
{  
	vis[start]=1;
	long long int x=0,y=0,oversol=0;
	for(int i=0;i<v[start].size();i++)
	if(!vis[v[start][i]]){
		x=(weigh[start][i]+(weigh[start][i]*solve(v[start][i]))%mod)%mod;
		sol[start]=(sol[start]+x+(oversol*x)%mod)%mod;
	    oversol=(x+oversol)%mod;
		y=1;
	}
	//cout<<"over:"<<oversol<<endl;
	 return oversol%mod;
}
int main()
{
	long long int n,x,y,i,j,k,w;
    cin>>n;
    for(i=0;i<n-1;i++)
    {
    	cin>>x>>y>>w;
    	x--;
    	y--;
    	v[x].push_back(y);
    	v[y].push_back(x);
    	weigh[x].push_back(w);
    	weigh[y].push_back(w);
    	roop[x]++;
    	roop[y]++;
    }
    for(i=0;i<n;i++)
    {
    	if(roop[i]==1){
    		roop_val=i;
    		break;
    	}
    }
   //cout<<"started:"<<roop_val<<endl;
    solve(roop_val);
    long long int solot=0;
    for(i=0;i<n;i++)solot=(solot+sol[i])%mod;
    cout<<solot<<endl;



}