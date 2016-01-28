#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string.h>
using namespace std;
struct node
{
	long long int x,y,dist1,dist2,abc;
};
node in[3000];
long long int n,dp[3000][3000]={0};

bool cmp(node a,node b)
{   
	return a.dist1<b.dist1;
}
int main()
{
	long long int x1,y1,x2,y2,lmax=0,rmax=0,lm,rm,maxsol=-1,an=0;
	cin>>n>>x1>>y1>>x2>>y2;
	for(int i=0;i<n;i++)
	{
		cin>>in[i].x>>in[i].y;
		in[i].dist1=(in[i].x-x1)*(in[i].x-x1)+(in[i].y-y1)*(in[i].y-y1);
		in[i].dist2=(in[i].x-x2)*(in[i].x-x2)+(in[i].y-y2)*(in[i].y-y2);
		
	}
	in[n].dist2=0;
	sort(in,in+n,cmp);
	for(int i=n;i>=1;i--)
	{
		an=max(an,in[i].dist2);
		in[i].abc=an;
        if(maxsol==-1)
        	maxsol=in[i-1].dist1+an;
        maxsol=min(in[i-1].dist1+an,maxsol);
	}
	an=max(an,in[0].dist2);
	maxsol=min(an,maxsol);
	
	cout<<maxsol<<endl;
}