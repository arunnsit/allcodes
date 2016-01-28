#include<iostream>
#include<algorithm>
#include<math.h>
int blocks=450;
using namespace std;

struct query
{
	int l,r,nos,block;
};

bool cmp(query a,query b)
{
	if(a.block==b.block)
		return a.r<b.r;
	else return a.block<b.block;
}
long long int fsol[300009],result=0;
int input[300009],coun[3000009],n,m;
query q[300009];
inline void add(int pos)
{
	result+=(2*coun[input[pos]]+1)*input[pos];
	coun[input[pos]]++;
	//cout<<"adding at "<<pos<<" "<<result<<endl;
}
inline void del(int pos)
{
	result-=(2*coun[input[pos]]-1)*input[pos];
	coun[input[pos]]--;
	//cout<<"deleting at "<<pos<<" "<<result<<endl;
}

int main()
{   
	std::ios::sync_with_stdio(false);
	cin>>n>>m;
    blocks=sqrt(n+0.0)+2;
	for(int i=1;i<=n;i++)
		cin>>input[i];

	for(int i=0;i<m;i++)
		{
			cin>>q[i].l>>q[i].r;
			q[i].nos=i+1;
			q[i].block=q[i].l/blocks;
		}
	sort(q,q+m,cmp);
	
	int curr_l=0,curr_r=0;

	for(int i=0;i<m;i++)
	{
		while(q[i].l<curr_l)
		{   
			curr_l--;
			add(curr_l);
		}
		while(q[i].l>curr_l)
		{
			del(curr_l);
			curr_l++;
		}
		while(q[i].r<curr_r)
		{
			del(curr_r);
			curr_r--;
		}
		while(q[i].r>curr_r)
		{   
			curr_r++;
			add(curr_r);
		}
		//cout<<curr_l<<" "<<curr_r<<" "<<coun[1]<<" "<<coun[2]<<endl;
		fsol[q[i].nos]=result;
	}
	for(int i=1;i<=m;i++)
		cout<<fsol[i]<<endl;

}