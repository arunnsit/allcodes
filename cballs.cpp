#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> v[20000];
int main()
{   int t,i,j;
    std::cout.sync_with_stdio(false);
	cin>>t;
	for(i=2;i<12000;i++)
	{
		if(v[i].size()==0)
		{
			for(j=i;j<12000;j+=i)
				v[j].push_back(i);
		}
	}
	while(t--)
	{
		int n;
		cin>>n;
		int k,mark[50000]={0},a[50000];
		std::vector<int> vo;
		for(i=0;i<n;i++)
			cin>>a[i];
		int initial=0;
		int prev=a[0];
		for(i=1;i<n;i++)
		{
			if(a[i]>=prev)
			{

			}
			else
			{
				initial+=prev-a[i];
				a[i]=prev;
			}
			prev=a[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<v[a[i]].size();j++)
				mark[v[a[i]][j]]++;
		}
		for(i=2;i<=10000;i++)
			if(mark[i])
				vo.push_back(i);

		    int sol=0,fsol=n,tmp;
			for(j=0;j<vo.size();j++)
			{   sol=0;
				for(i=0;i<n;i++)
				{
					if(a[i]%vo[j]!=0)
					{
						tmp=a[i]%vo[j];
						sol+=vo[j]-tmp;
					}
					if(sol>n)break;
				}
				fsol=min(fsol,sol);
			}
			cout<<fsol+initial<<endl;
	}
}