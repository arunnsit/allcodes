#include<iostream>
#include<unordered_map>
#include<algorithm>
#include<vector>
using namespace std;
struct quer{
	char a;
	int x; 
};
quer query[200009];
int diff_nos[200009],bit[200009]={0};
void update(int pos,int n,int add)
{
	int ind=pos+1;
	while(ind<=n+1)
	{
		bit[ind]+=add;
			ind=ind+(ind&(-ind));
	}	
}
int quer(int pos)
{
	int ind=pos+1;
	int sum=0;
	while(ind!=0)
	{
		sum+=bit[ind];
		ind&=ind-1;
	}
	return sum;
}
int main()
{
	int q,i,j,k,l,n,kmax=0,x,y,z;
	char s[10];
	cin>>q;
	unordered_map<int,int>map1;
	for(i=0;i<q;i++)
	{
		cin>>query[i].a;
		cin>>query[i].x;
		{map1[query[i].x]++;
			if(map1[query[i].x]==1)
				diff_nos[kmax++]=query[i].x;
		}
	}
	sort(diff_nos,diff_nos+kmax);
	std::vector<int> v(diff_nos,diff_nos+kmax);
	unordered_map<int,int>map2;
	unordered_map<int,int>indecis;
	for(i=0;i<kmax;i++){
		indecis[diff_nos[i]]=i;
		}
	int activ=0;	
    for(i=0;i<q;i++)
	{   //cout<<query[i].a<<" "<<query[i].x<<endl;
		if(query[i].a=='I')
		{   
			if(!map2[query[i].x])
			{
				map2[query[i].x]++;
				update(indecis[query[i].x],kmax,1);
				activ++;
			}

		}
		else if(query[i].a=='D')
		{   
			if(map2[query[i].x])
			{
				map2[query[i].x]=0;
				update(indecis[query[i].x],kmax,-1);
				activ--;
			}
		}
		else if(query[i].a=='C')
		{
			int low=lower_bound(v.begin(),v.end(),query[i].x)-v.begin()-1;
				cout<<quer(low)<<endl;
		}
		else
		{
			if(activ<query[i].x)
				cout<<"invalid\n";
			else
			{
				int low=0,high=kmax-1,mid=low+(high-low)/2,val;
				while(high>low)
				{   mid=low+(high-low)/2;
					val=quer(mid);
					//cout<<"val:"<<val<<" "<<mid<<endl;
					if(val<query[i].x)
					{
						low=mid+1;
					}
					else if(val>query[i].x)
					{
						high=mid-1;
					}
					else break;
				}
				mid=low+(high-low)/2;
				cout<<diff_nos[mid]<<endl;
			}

		}



	}
}