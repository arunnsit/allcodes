#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
struct node{
	int x,y,mark;
};
node edge[40];
int n;
bool cmp(node a,node b)
{   
	if(a.x==b.x)return a.y<b.y;
	return a.x<b.x;
}
int find_parent(int nod,int box[100009])
{   if(box[nod]==0)
	    return -1;
	if(box[nod]==nod)
		return nod;
	else return find_parent(box[nod],box);
}

int box[100009]={0},laps[100009]={0};
std::vector<int> ed[100009],pd[100009];
std::vector<int> v;
int i,j,sol=0,check=0,pon=0,total=0,x;
int makrs[100009]={0};

int dsu(int number,int len)
{
	sol=0,check=0,pon=0;
	//number=number|(1<<len);
    total=0;
	for(i=0;i<len;i++)
	{   pon++;
		if(((number>>i)&1)==1)
		{   
			laps[edge[i].mark]++;
			ed[edge[i].x].push_back(edge[i].y);
			pd[edge[i].y].push_back(edge[i].x);
			if(ed[edge[i].x].size()>1||pd[edge[i].y].size()>1||laps[edge[i].mark]>1)
			{   

				check=1;
			}
			if(!makrs[edge[i].x])
			{   makrs[edge[i].x]++;
				v.push_back(edge[i].x);
				total++;
			}
			if(!makrs[edge[i].y])
			{   makrs[edge[i].y]++;
				v.push_back(edge[i].y);
				total++;
			}
		}
	}
	
    if(!check)
    {
	for(i=0;i<v.size();i++)
	{
		if(!box[v[i]])
		{    x=v[i];
			while(1)
			{   pon++;
				box[x]=1;
				if(ed[x].size()==0)
				{
					sol++;
					break;
				}
				x=ed[x][0];
				if(box[x])
					break;
			}
		}
	}
}
	for(i=0;i<len;i++)
	{   pon++;
		if(((number>>i)&1)==1)
		{   
			laps[edge[i].mark]=0;
			ed[edge[i].x].clear();
			pd[edge[i].y].clear();
			makrs[edge[i].x]=0;			
			makrs[edge[i].y]=0;
	    }
    }
 

    for(i=0;i<v.size();i++)
    {
    	box[v[i]]=0;
    }
    v.clear();
   // cout<<"pon:"<<pon<<endl;
    if(check)return n;
	return total-sol;
}

long long int fac[100009]={0};
int mod=1000000007;

int main()
{
	int t,i;
	fac[1]=1;
	//factorial for permuation
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
			if(x!=y)
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
        //sort(edge,edge+m,cmp);
		long long int sol=0;
		int mar=2;
		int i=1;
		//cout<<"check1"<<endl;
        int po2=pow(2,m),coun;
            
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
                
                if(var)
                {
				    if(coun%2!=0)
				        sol=(sol+fac[n-var]+mod)%mod;
			        else
			            sol=(sol-fac[n-var]+mod)%mod;	
		        }
		        if(sol<0)
		        	sol=mod+sol;
                

		        //cout<<"j:"<<j<<" var:"<<var<<" sol:"<<sol<<endl;
			}
		sol=(fac[n]-sol+mod)%mod;

		cout<<sol<<endl;
	}
}