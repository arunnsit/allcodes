#include<iostream>
using namespace std;
#define N 33900
int a[N],bit[N]={0};
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
	}
	return sum;
}
int search_2(int st,int val)
{   //cout<<"wants:"<<val<<endl;
	int s=st,e=33900,mid,u;
	u=query(st);
	while(s<=e)
	{   mid=(s+e)>>1;
		if(query(mid)-u<val)s=mid+1;
		else if(query(mid)-u>=val)e=mid-1;
	}
	return s;
}
int lucky[3005]={0};
int main()
{
	int i,j,k,l,c=0,cp=3000,x=1,prev=0,u;
	for(i=0;i<=33900;i++)update(i,1,33900);
	for(k=1;k<=cp;k++){
		x=search_2(-1,2);
		lucky[k]=x+1;
		u=x;
		j=x;
		while(j<=33900)
			{ 	//cout<<"gonna:"<<j<<" "<<u+2<<endl;
				update(j,-1,33900);
				j=search_2(j,u+1);
	}
	}
	cin>>u;
	while(u)
	{
		cout<<lucky[u]<<endl;
		cin>>u;
	}

}	



