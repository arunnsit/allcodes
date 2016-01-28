#include<iostream>
#include<algorithm>
#include<queue>
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
int dp[1020][1020]={0};

struct node{
	int x,y;
};
node strt[1020][1020]={0};
int main(){
	int t,n,c=0;
	scanf("%d",&t);
		memset(dp,-1,sizeof(dp));

	while(t--)
	{ 	memset(strt,-1,sizeof(strt));

		scanf("%d",&n);
		node temp;
		temp.x=0;
		temp.y=0;
		c=0;
				queue<node> q1;

		q1.push(temp);
		while(!q1.empty())
		{   c++;
			node temp;
			temp.x=q1.front().x;
			temp.y=q1.front().y;
			if(q1.front().x==n&&q1.front().y==0)
			{
				break;
			}
			q1.pop();
			for(int i=0;i<=9;i++)
			{   node temp2;
				temp2.x=temp.x+i;
				temp2.y=(temp.y*10+i)%n;
				if(temp.x+i<=n&&dp[temp2.x][temp2.y]!=t)
				{   strt[temp2.x][temp2.y].x=temp.x;
                    strt[temp2.x][temp2.y].y=temp.y;
					dp[temp2.x][temp2.y]=t;
					q1.push(temp2);
				}
			}
		}
		stack <char> st;
		int x=n,y=0,a=0,b=0;
		while(x!=0)
		{
			a=strt[x][y].x;
			b=strt[x][y].y;
			//cout<<a<<" "<<b<<" "<<x-a<<endl;
			st.push(x-a+'0');
			x=a;
			y=b;
		}
		while(!st.empty()){
			printf("%c",st.top());
			st.pop();
		}
		printf("\n");
		}
}