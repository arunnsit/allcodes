#include<iostream>
#include<algorithm>
#define blocks 320
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
void add()
{

}
void del()
{

}
int input[100009],n,m;
query q[100009];

int main()
{
	cin>>n>>m;

	for(int i=0;i<n;i++)
		cin>>input[i];

	for(int i=0;i<m;i++)
		{
			cin>>q[i].l>>q[i].r;
			q[i].nos=i+1;
			q[i].block=q[i].l/blocks;
		}
	sort(q,q+m,cmp);	
}