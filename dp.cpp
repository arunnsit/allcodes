#include<iostream>
#include<algorithm>
#include<string.h>
#include<queue>
using namespace std;
char a[100][100];
struct point{
	int x,y,val;
};
point building[30];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j,k,coun=0;
		cin>>n>>m;
		point pizza;
        for(i=0;i<n;i++)cin>>a[i];
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        if(a[i][j]='X'){
        	pizza.x=i;
        	pizza.y=j;
        }
        else if(a[i][j]=='$')
        {
        	building[coun].x=i;
        	building[coun++].y=j;
        }
        	int val[60][60]={0};
        	memset(val,10000000,sizeof(val));
            


	}

}

