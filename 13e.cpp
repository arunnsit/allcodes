#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int po[300009],nex[300009],jumps[300009],blocks=0,n,i;
inline void update(int pos)
{   i=pos;
	if(i+po[i]>n-1)
			{
				nex[i]=-1;
				jumps[i]=1;
			}
	else if(i+po[i]>=(i/blocks+1)*blocks)
		{
				nex[i]=i+po[i];
				jumps[i]=1;
		}
		else
		{
			nex[i]=nex[i+po[i]];
			jumps[i]=jumps[i+po[i]]+1;
		}
}
int main()
{   
	int m,x,y,z,b;
	scanf("%d%d",&n,&m);
    blocks=320;
	for(int i=0;i<n;i++)
	{
		cin>>po[i];
	}
	for(int i=n-1;i>=0;i--)
	{   
		update(i);
		//cout<<"nex:"<<nex[i]<<" jumps:"<<jumps[i]<<endl;
	}
				int moves=0,last=0;
	while(m--)
	{
		scanf("%d",&x);
		if(!x)
		{
			scanf("%d%d",&y,&z);
			y--;
			po[y]=z;
			b=(y/blocks)*blocks;
			for(int i=y;i>=b;i--)
				update(i);
		}
		else
		{
			scanf("%d",&y);
			y--;
		    moves=0,last=0;

			while(nex[y]!=-1)
			{   
				moves+=jumps[y];
				y=nex[y];
				last=y;
			}
			while(y+po[y]<n)
			{
				moves++;
				y=y+po[y];
				last=y;
			}
			printf("%d %d\n",y+1,moves+1);
		}
	}
}