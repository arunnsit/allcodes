#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
#include<unordered_map>
 
using namespace std;
struct node{
	int x,y,mark;
};
 
node edge[400];
int n;
bool cmp(node a,node b)
{   
	if(a.x==b.x)return a.y<b.y;
	return a.x<b.x;
}
int P[100009]={0},ends_here[100009]={0},start[100009]={0},ranka[100009]={0},sep_coun[100009]={0},sep_mark[100009]={0};
int find_parent(int x)
{   
	if (x != P[x]) P[x] = find_parent(P[x]);
    return P[x];
}
void create_set(int x)
{
	P[x] = x;
    ranka[x] = 1;
}
int merge(int x,int y)
{
	 x = find_parent(x);
     y = find_parent(y);
      if(x==y)return -1;
 if(x==y)return -1;
 
 if (ranka[x] > ranka[y]) P[y] = x;
 else P[x] = y;
 if (ranka[x] == ranka[y]) ranka[y] = ranka[x] + 1;
 
 return 1;    
}
 
int dsu(int number,int len)
{   int check=0,total=0,sol=0;
	for(int i=0;i<len;i++)
	{
		if(((number>>i)&1)==1)
		{
			start[edge[i].x]++;
			ends_here[edge[i].y]++;
			sep_mark[edge[i].mark]++;
			
			if(!sep_coun[edge[i].y])
				total++;
			if(!sep_coun[edge[i].x])
				total++;
			sep_coun[edge[i].y]=1;
			sep_coun[edge[i].x]=1;
			if(start[edge[i].x]>1||ends_here[edge[i].y]>1||sep_mark[edge[i].mark]>1)
			{
				check=1;
				
			}
			if(find_parent(edge[i].y)!=find_parent(edge[i].x)&&find_parent(edge[i].y)&&find_parent(edge[i].x))
			{
					sol--;
			}
            if(P[edge[i].x]==0&&P[edge[i].y]==0)
            	sol++;
			if(P[edge[i].x]==0)
				create_set(edge[i].x);
			if(P[edge[i].y]==0)
				create_set(edge[i].y);
 
			
			if(merge(edge[i].x,edge[i].y)==-1)
				{   
					check=1;
				}
 
		}
	}
	for(int i=0;i<len;i++)
	{
		if(((number>>i)&1)==1)
		{
			start[edge[i].x]=0;
			ends_here[edge[i].y]=0;
			sep_mark[edge[i].mark]=0;
			sep_coun[edge[i].y]=0;
			sep_coun[edge[i].x]=0;
			P[edge[i].x]=0;
			P[edge[i].y]=0;
            ranka[edge[i].x]=0;
			ranka[edge[i].y]=0;
		}
	}
 
	if(check)return n;
	return total-sol;
}
 
long long int fac[100009]={0};
long long int mod=1000000007;
 
struct node2{
	int x,y;
};
int main()
{
	int t,i;
	fac[1]=1;
	fac[0]=1;
	for(i=2;i<=100003;i++)
		fac[i]=(fac[i-1]*i)%mod;
	cin>>t;
 
	while(t--)
	{
		int m,j,k,x,y,county=0;
		cin>>n>>m;
		for(i=0;i<m;i++)
		{   
			cin>>x>>y;
 
			
		{
			edge[county].x=x;
			edge[county].y=y;
			edge[county].mark=i+1;
			edge[county+1].x=y;
			edge[county+1].y=x;
			edge[county+1].mark=i+1;
			county+=2;
		}
		}
		m=county;
		long long int sol=0;
		int mar=2;
		int i=1;
        int po2=1,coun;
            for(j=1;j<=m;j++)po2*=2;
 
			for(j=1;j<po2;j++)
			{   coun=0;
				if(j==mar)
				{
					mar*=2;
					i++;
				}
				for(k=0;k<i;k++)
				{
					if(((j>>k)&1)==1)
						coun++;
				}
                int var=dsu(j,i);
                
                if(var!=n)
                {
				    if(coun%2!=0)
				        sol=(sol+fac[n-var]+mod)%mod;
			        else
			            sol=(sol-fac[n-var]+mod)%mod;	
		        }
// cout<<"j:"<<j<<" var:"<<var<<" sol:"<<sol<<endl;
		        
		        
			}
		sol=(fac[n]-sol+mod)%mod;
		 
		cout<<sol%mod<<endl;
	}
}  