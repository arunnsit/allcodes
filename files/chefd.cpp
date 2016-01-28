#include<iostream>
using namespace std;
#define N 100050
int a[N][3]={0},bit[N][3]={0},temp[N];
void make_tree(int n)
{   
	for(int k=0;k<3;k++)
	for(int i=0;i<n;i++)
	{
		int ind=i+1;
		while(ind<=n)
		{
			bit[ind][k]+=a[i][k];
			ind=ind+(ind&(-ind));
		}
	}
}
void update(int pos,int add,int n,int which_tree)
{
	int ind=pos+1;
	while(ind<=n)
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
		{
			cin>>temp[i];
			if(temp[i]%2==0)a[i][0]=1;
            if(temp[i]%3==0)a[i][1]=1;
            if(temp[i]%5==0)a[i][2]=1;
		}	
    make_tree(n);
    cin>>q;
    while(q--)
    {  
    	int type,x,y;
    	cin>>type;
    	if(type==1)
    	{
    		cin>>x>>y>>p;
    		if(p==2){
    			cout<<query(y-1,0)-query(x-2,0);
    		}
    		if(p==3){
    			cout<<query(y-1,1)-query(x-2,1);
    		}
    		if(p==5){
    			cout<<query(y-1,2)-query(x-2,2);
    		}
    	}
    	else
    	{
    		cin>>x>>y;
    		x--;
    		if(temp[x]%2==0)
    		{
    			temp[x]=y;
    			a[x][0]=0;
    			update(x,-1,n,0);
    		}
    		if(temp[x]%3==0)
    		{
    			temp[x]=y;
    			a[x][1]=0;
    			update(x,-1,n,1);
    		}
    		if(temp[x]%5==0)
    		{
    			temp[x]=y;
    			a[x][2]=0;
    			update(x,-1,n,2);
    		}
    		if(temp[x]%2==0)
    		{
    			a[x][0]=1;
    			update(x,1,n,0);
    		}
    		if(temp[x]%3==0)
    		{
    			a[x][1]=1;
    			update(x,1,n,1);
    		}
    		if(temp[x]%5==0)
    		{
    			a[x][2]=1;
    			update(x,1,n,2);
    		}


    	}
    }

}