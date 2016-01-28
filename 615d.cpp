#include<iostream>
#include<vector>
using namespace std;
std::vector<int> v[200009];
vector<int>primes;
long long int coun[200010]={0};
long long int power(long long int x,long long  int y,long long int m)
{
    if (y == 0)
        return 1;
    long long int p = power(x, y/2, m) % m;
    p = (p * p) % m;
 
    return (y%2 == 0)? p : (x * p) % m;
}
int main()
{
	long long int i,j,k,n,m,tmp,xop;
	v[1].push_back(1);
	for(i=2;i<=200009;i++)
		if(!v[i].size())
		{
			primes.push_back(i);
			for(j=i;j<200009;j+=i)
				v[j].push_back(i);
		}
	cin>>m;
	for(i=0;i<m;i++)
	{
		cin>>tmp;
		xop=tmp;
		for(j=0;j<v[xop].size();j++)
		{
			while(tmp%v[xop][j]==0&&tmp!=1)
			{
				tmp/=v[xop][j];
				coun[v[xop][j]]++;
			}
		}
	}
	long long int fso=0,xol=1;
	for(i=0;i<primes.size();i++)
	{
		if(coun[primes[i]])
		{ 
			fso+=coun[primes[i]]+1;
			xol*=(coun[primes[i]]+1);
		}
	}

	long long int mod=1000000007,solution=1;
	for(i=0;i<primes.size();i++)
	{
		if(coun[primes[i]])
		{   //cout<<"sx:"<<xol<<endl;
			solution=(solution*power(primes[i],((xol/(coun[primes[i]]+1))%(mod-1)*((coun[primes[i]]*(coun[primes[i]]+1))/2)%(mod-1))%(mod-1),mod))%mod;
		}
	}
	cout<<solution<<endl;


}