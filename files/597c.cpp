#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
long long int ncr[100009][15]={0};
long long int n,k,a[100009];

long long int bit[100009][15]={0};
void update(int pos,long long int add,int n,int k)
{
	int ind=pos+1;
	while(ind<=n)
	{
		bit[ind][k]+=add;
			ind=ind+(ind&(-ind));
	}
}
long long int query(int pos,int k)
{
	int ind=pos+1;
	long long int sum=0;
	while(ind!=0)
	{
		sum+=bit[ind][k];
		ind=ind-(ind&(-ind));
	}
	return sum;
}
int main()
{
	int tmp;
    long long int sol=0,curr,j;
    cin>>n>>k;
	for(int i=0;i<n;i++)
		{
			cin>>tmp;
			for(j=2;j<=k+1;j++)
			{
				update(tmp,query(tmp-1,j-1),100009,j);
			}
			update(tmp,1,100009,1);
		}
		cout<<query(100008,k+1)<<endl;

}