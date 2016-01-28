#include<iostream>
using namespace std;
#define N 100050
int bit[N][3]={0},temp[N];

void update(int pos,int add,int n,int which_tree)
{
	int ind=pos+1;
	while(ind<=n+1)
	{
		bit[ind][which_tree]+=add;
			ind=ind+(ind&(-ind));
	}
}
int query(int pos,int which_tree)
{
	int ind=pos+1;
	int sum=0;
	while(ind!=0)
	{
		sum+=bit[ind][which_tree];
		ind&=ind-1;
	}
	return sum;
}
int main()
{
	int n,i,j,k,q,p;
	cin>>n;
	for(i=0;i<n;i++)
		{
			cin>>temp[i];
		}	
    cin>>q;
    while(q--)
    {  
    	int type,x,y;
    	cin>>type;
    	if(type==1)
    	{
    		cin>>x>>y>>p;
    		if(p==2)
    		{
    			update(x-1,1,n,0);
    			update(y,-1,n,0);
    		}
    		if(p==3)
    		{
    			update(x-1,1,n,1);
    			update(y,-1,n,1);
    			
    		}
    		if(p==5)
    		{
    			update(x-1,1,n,2);
    			update(y,-1,n,2);
    			
    		}
    	}
    	else
    	{
    		cin>>x>>y;
    		x--;
    		temp[x]=y;
    		int tp[3]={0};
    		for(i=0;i<3;i++){
    		tp[i]=query(x,i);
        }
        for(i=0;i<3;i++){
    		update(x,-tp[i],n,i);
            update(x+1,tp[i],n,i);
        }
        
    	}

    }
    for(i=0;i<n;i++)
    {
    	int x,y,z;
    	x=query(i,0);
    	y=query(i,1);
    	z=query(i,2);
    	while(x&&(temp[i]%2==0))
    	{
    		temp[i]/=2;
    		x--;
    	}
    	while(y&&(temp[i]%3==0))
    	{
    		temp[i]/=3;
    		y--;
    	}
    	while(z&&(temp[i]%5==0))
    	{
    		temp[i]/=5;
    		z--;
    	}
    	cout<<temp[i]<<" ";
    }

}