#include<iostream>
#include<algorithm>
#include<math.h>
#include <stdio.h>
#include <vector>
#define mod 1000000009
using namespace std;
 int fibo[300009],arr[300009],fibosum[300009],sum[300009],sol;
 
int n,i,cur=0,vm=0;
inline int add(int a,int b)
{
    int res = (a+b)%mod;
    //if(res >=mod)
    //       return res-mod;
    return (res+mod)%mod;
}
inline void precomp()
{
	fibo[1]=1;
	for( i=2;i<=300008;i++)
		fibo[i]=add(fibo[i-1],fibo[i-2]);
	for( i=1;i<=300008;i++)
		fibosum[i]=add(fibosum[i-1],fibo[i]);
}

vector<pair<int,int> >query(300009);
std::vector<int> v(300009);
vector<pair<int,int> > awesome[300009];
void rebuild()
{   
    int prev=0,curr=0,pdelta,pp=0,ndelta,temp,i,j;
	for( i=1;i<=n;i++)
	{       pdelta=0;
			ndelta=0;
			pp=0;
		for( j=0;j<awesome[i].size();j++)
		{
			if(awesome[i][j].second==1)
			{pdelta++;
			}
			else
			{
				ndelta=add(ndelta,fibo[awesome[i][j].first]);
				pp=add(pp,fibo[awesome[i][j].first-1]);
			}
		}
		arr[i]=add(add(arr[i],prev),add(curr,pdelta));
		//cout<<arr[i]<<" ";
		sum[i]=add(sum[i-1],arr[i]);
		temp=curr;
		curr=add(curr,prev);
		prev=temp;
		curr=add(add(curr,-ndelta),pdelta);
		prev=add(prev,-pp);
		awesome[i].clear();
	}
}

int main()
{
	
	precomp();
	int m,x,y,z,i;
	scanf("%d %d",&n,&m);
    for( i=1;i<=n;i++)
    	{scanf("%d",&arr[i]);sum[i]=add(sum[i-1],arr[i]);}
    int blocks=1600;
	while(m--)
	{
		scanf("%d %d %d",&x,&y,&z);

		if(x==2)
		{
			sol=(sum[z]-sum[y-1]+mod)%mod;
			for(int i=0;i<cur;i++)
			{
				if(!(query[i].first>z||query[i].second<y))
				{
					sol=add(sol,fibosum[min(query[i].second,z)-query[i].first+1]-fibosum[max(query[i].first,y)-query[i].first]);
				}

			}
		    printf("%d\n",sol);
		}
		else
		{
			query[cur++]=make_pair(y,z);
			awesome[y].push_back(make_pair(1,1));
			awesome[z].push_back(make_pair(z-y+1,-1));
			if(cur==blocks)
			{
				rebuild();
				cur=0;
			}				

		}
	}
	//for( i=0;i<vm;i++)
		
}