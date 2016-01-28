#include<iostream>
#include<algorithm>
using namespace std;
struct node
{
	int x,type,nos;
	
};
bool cmp(node a,node b)
{   
	if(a.x==b.x)
		return a.type>b.type;
	return a.x<b.x;
}
bool cmp2(node a,node b)
{
	return a.nos<b.nos;
}
node eds[1000009],later[1000009],maed[1000009],fsol[1000009];
int main()
{
	int n,m,tocreate,curr=0,ts=0,mc=0,ms=0,fs=0,check=0,i,j;
	cin>>n>>m;
	for(int i=0;i<m;i++)
		cin>>eds[i].x>>eds[i].type,eds[i].nos=i+1;
	sort(eds,eds+m,cmp);
    tocreate=m-n+1;
    for(i=3;i<=n;i++)
    	for(j=1;j<=i-2;j++)
    		if(ts!=tocreate){
    			later[ts].x=i;
    			later[ts++].type=j;
    			//cout<<later[ts-1].x<<" "<<later[ts-1].type<<endl;
    		}
    		else break;
    		for(i=0;i<n-1;i++)
    		{
    			maed[ms].x=i+1;
    			maed[ms++].type=i+2;
    		}	
  
	for(i=0;i<m;i++)
	{   
        //cout<<"ed:"<<eds[i].x<<" "<<eds[i].type<<endl;
		if(eds[i].type==1)
		{
			if(fs==ms)
			{
				check=1;
				break;
			}
			fsol[i].x=maed[fs].x;
			fsol[i].type=maed[fs].type;
			fsol[i].nos=eds[i].nos;
			//cout<<fsol[i].x<<" "<<fsol[i].type<<endl;
			fs++;
		}
		else
		{
			if(fs<0||maed[fs-1].type<later[curr].x||curr==ts)
			{
				check=1;
				break;
			}

			fsol[i].x=later[curr].x;
			fsol[i].type=later[curr].type;
			fsol[i].nos=eds[i].nos;
			//cout<<fsol[i].x<<" "<<fsol[i].type<<endl;
			curr++;
		}
	}
	sort(fsol,fsol+m,cmp2);
	if(check)
		cout<<-1;
	else
	{
		for(i=0;i<m;i++)
		{
			cout<<fsol[i].x<<" "<<fsol[i].type<<endl;
		}

	}
}