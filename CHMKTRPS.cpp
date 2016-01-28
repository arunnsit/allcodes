#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
struct node
{
	unordered_map<long long int,int>store;
	vector<long long int>v;
	int c;
};
struct node2
{
	int x,y;
};
unordered_map<long long int,node>ma;
unordered_map<long long int,int>uni;
int main()
{
	long long int n,i,tmp,j,k,l,co=0;
	cin>>n;
    vector<node2> v;
	for(i=0;i<3*n;i++)
	{   cin>>tmp;
		if(co<250)
		{   node2 ops;
			ops.x=tmp;
			ops.y=i;
			v.push_back(ops);
			co++;
		}
	}
	long long int sum,msum=0,mcoun=0;
	for(i=0;i<v.size();i++)
		for(j=i+1;j<v.size();j++)
			for(k=j+1;k<v.size();k++)
			if(i!=j&&j!=k&&i!=k){
				sum=v[i].x+v[j].x+v[k].x;
				if(!ma[sum].store[v[i].y]&&!ma[sum].store[v[j].y]&&!ma[sum].store[v[k].y])
				{
					ma[sum].v.push_back(v[i].y);
					ma[sum].v.push_back(v[j].y);
					ma[sum].v.push_back(v[k].y);
					ma[sum].store[v[i].y]++;
					ma[sum].store[v[j].y]++;
					ma[sum].store[v[k].y]++;
					if(ma[sum].v.size()>mcoun)
					{
						mcoun=ma[sum].v.size();
						msum=sum;
					}
				}
			}
		cout<<mcoun/3<<endl;	
        if(mcoun)
        {
		for(i=0;i<ma[msum].v.size();i++)
			cout<<ma[msum].v[i]+1<<" ";
		cout<<endl;
	}



}