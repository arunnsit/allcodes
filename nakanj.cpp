#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<queue>
#include<utility>
using namespace std;
int xo[10]={-1,-1,-2,-2,2,2,1,1};
int yo[10]={-2,2,-1,1,-1,1,-2,2};
struct node
{
	int x,y,sol;
	
};
int main()
{
	int t,i;
	cin>>t;
	while(t--)
	{   string a,b;
		cin>>a>>b;
		int x=a[0]-'a'+1,y=a[1]-'0',x2=b[0]-'a'+1,y2=b[1]-'0';
        queue< node > que;
        node pa;
        pa.x=x;
        pa.y=y;
        pa.sol=0;
        int vis[11][11]={0};
        que.push(pa);
        int sol=0;
        while(!que.empty())
        {
        	int e=que.front().x,f=que.front().y,val=que.front().sol;
        	que.pop();

        	//cout<<e<<" "<<f<<endl;
        	if(e==x2&&f==y2)
        		{sol=val;break;}
        	
            for(i=0;i<9;i++)
        	{        node temp;
        		temp.x=e+xo[i];
        		temp.y=f+yo[i];
        		temp.sol=val+1;
        	if(temp.x>0&&temp.y>0&&temp.x<=8&&temp.y<=8&&!vis[temp.x][temp.y])	
        	{
        		que.push(temp);
        		vis[temp.x][temp.y]=1;
        	}
    }
        }
        cout<<sol<<endl;


	}
}