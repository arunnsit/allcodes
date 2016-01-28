#include<iostream>
#include<string.h>
using namespace std;
 struct node
{
	int x,y,mid;
};
int P[100009]={0},ranka[100009]={0},marka[100009]={0};
int find_parent(int x)
{   
	if (x != P[x]) P[x] = find_parent(P[x]);
    return P[x];
}
void create_set(int x)
{
	P[x] = x;
    ranka[x] = 1;
}
int merge(int x,int y)
{
	 x = find_parent(x);
     y = find_parent(y);
      if(x==y)return -1;
 if(x==y)return -1;
 
 if (ranka[x] > ranka[y]) P[y] = x;
 else P[x] = y;
 if (ranka[x] == ranka[y]) ranka[y] = ranka[x] + 1;
 
 return 1;    
}

node arr[3000][2]={0};
int main()
{
	int t;
	ios_base::sync_with_stdio(0);
	cin>>t;
	while(t--)
	{
		int x,y,m,n,mid,i;
        memset(P,0,sizeof(P));
        memset(ranka,0,sizeof(ranka));
        memset(marka,0,sizeof(marka));
        memset(arr,0,sizeof(arr));
		cin>>n>>m;
		while(m--)
		{
			cin>>x>>y;
			mid=(x+y)/2;
			
			if((y-x+1)%2==0&&arr[mid][1].y<y)
			{arr[mid][1].x=x;
			arr[mid][1].mid=1;
		    arr[mid][1].y=y;}
		    if((y-x+1)%2!=0&&arr[mid][0].y<y)
			{arr[mid][0].x=x;
			arr[mid][0].mid=1;
		    arr[mid][0].y=y;}
		}
		int sol=0;
		for(i=1;i<=n;i++)
		{   if(arr[i][1].mid)
			{
			x=arr[i][1].x;
			y=arr[i][1].y;
			while(x<y)
			{   
				marka[x]++;
				marka[y]++;
				if(find_parent(y)!=find_parent(x)&&find_parent(y)&&find_parent(x))
			    {
					sol--;
			    }
                if(P[x]==0&&P[y]==0)
            	sol++;
			    if(P[x]==0)
				create_set(x);
			    if(P[y]==0)
				create_set(y);
			    merge(x,y);
			    x++;
			    y--;
			}
		    }
		    if(arr[i][0].mid)
		    {
			x=arr[i][0].x;
			y=arr[i][0].y;
			while(x!=y)
			{   
				marka[x]++;
				marka[y]++;
				if(find_parent(y)!=find_parent(x)&&find_parent(y)&&find_parent(x))
			    {
					sol--;
			    }
                if(P[x]==0&&P[y]==0)
            	sol++;
			    if(P[x]==0)
				create_set(x);
			    if(P[y]==0)
				create_set(y);
			    merge(x,y);
			    x++;
			    y--;
			}
		}
	}   
	    //cout<<sol<<endl;
		int sfol=n;
		for(i=1;i<=n;i++)
		{
			if(marka[i])sfol--;
		}
		sfol+=sol;
		long long int msol=1;
		for(i=1;i<=sfol;i++)msol=(msol*26)%1000000007;
		cout<<msol<<endl;	
	}
}