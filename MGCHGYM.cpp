#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;
int a[100009];
int dp[10002][10002]={0};
int sol(int j,int r,int w)
{  if(w==0)return 1;
	if(w<0)return 2;
 	if(dp[w][j])return dp[w][j];
 	//printf("%d\n",w);
    int x=3;
	 for(int i=j+1;i<=r;i++)x=min(x,min(sol(i,r,w-a[i]),sol(i,r,w)));
	 return dp[w][j]=x;
}
int main()
{
	int n,q,i,j,k,l;
	scanf("%d %d",&n,&q);
    for(i=1;i<=n;i++)scanf("%d",&a[i]);
    while(q--)
    {
    	int type,i,l,r,x,w;
    	scanf("%d",&type);
    	if(type==1)
    	{
    		scanf("%d %d",&i,&w);
    		a[i]=w;

    	}
        if(type==2)
        {
        	scanf("%d %d",&l,&r);
        	for(i=l;i<=(l+r)/2;i++)
        	{
        		w=a[r+l-i];
        		a[r+l-i]=a[i];
        		a[i]=w;
        	}
        	
        }
        if(type==3)
        {
           scanf("%d %d %d",&l,&r,&w);
            memset(dp,0,sizeof(dp[0][0])*10002*10002);
            sol(l-1,r,w);
           if(dp[w][l-1]==1)printf("Yes\n");
           else printf("No\n");


        }
    }	

}