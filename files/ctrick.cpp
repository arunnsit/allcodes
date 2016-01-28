#include<iostream>
using namespace std;
void update(int bit[20008],int pos,int add,int n)
{
	int ind=pos;
	while(ind<=n)
	{
		bit[ind]+=add;
			ind=ind+(ind&(-ind));
	}
}
int query(int bit[20008],int pos)
{
	int ind=pos;
	int sum=0;
	while(ind!=0)
	{
		sum+=bit[ind];
		ind=ind-(ind&(-ind));
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,j,k,y,w;
		cin>>n;
		if(n==1)cout<<"1\n";
		else{
		int bit[20009]={0},sol[20009]={0},x;
        sol[1]=1;
        x=1;
        for(i=1;i<=n;i++)
        update(bit,i,1,n);
		for(i=1;i<=n;i++)
		{ x=((x+i)%(n-i+1));
		  x=(x==0)?(n-i+1):x;
		  int low=1;
		  int high=n;
		  int mid;
		  while(high>=low)
		  {
		  	mid=(high+low)>>1;
		  	if(query(bit,mid)>=x)high=mid-1;
		  	else if(query(bit,mid)<x)low=mid+1;
		  }
		  	sol[low]=i;
		  	update(bit,low,-1,n);
		  
		}
		for(i=1;i<=n;i++)cout<<sol[i]<<" ";cout<<endl;

}
	}

}