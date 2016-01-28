#include<iostream>
using namespace std;
#define N 100000
int a[N],bit[N]={0};
void make_tree(int n)
{
	for(int i=0;i<n;i++)
	{
		int ind=i+1;
		while(ind<=n)
		{
			bit[ind]+=a[i];
			ind=ind+(ind&(-ind));
		}
	}
}
void update(int pos,int add,int n)
{
	int ind=pos+1;
	while(ind<=n)
	{
		bit[ind]+=add;
			ind=ind+(ind&(-ind));
	}
}
int query(int pos)
{
	int ind=pos+1;
	int sum=0;
	while(ind!=0)
	{
		sum+=bit[ind];
		ind=ind-(ind&(-ind));
        cout<<ind<<endl;
	}
	return sum;
}
int main()
{
	int n,i,j,k,q,p;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
    make_tree(n);
    cin>>q;
    while(q--)
    {   cin>>p;
    	cout<<query(p)<<endl;
    }

}