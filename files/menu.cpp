#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int a[69][2]={0};
double dp[25][52][3][150]={0};
int n,k,m,i,j;
double solve(int k,int prev,int coun,int budg)
{   
	if(k==0&&budg>=0)
		return 0;
	if(k==0||budg<0)
		return -999999999;
	double sol=-999999999;
	if(dp[k][prev][coun][budg]>-1000000000){
		return dp[k][prev][coun][budg];
	}
	int i,jm;
	for(i=1;i<=n;i++)
	{
		if(i==prev)
		{
			if(coun==2)
			{
				sol=max(sol,solve(k-1,i,coun,budg-a[i][0]));
			}
			if(coun==1)
			{
				sol=max(sol,solve(k-1,i,coun+1,budg-a[i][0])+0.5*a[i][1]);
			}
		}
		else
		{
			sol=max(sol,solve(k-1,i,coun+1,budg-a[i][0])+a[i][1]);
		}
	}
	//cout<<"k:"<<k<<" prev:"<<prev<<" coun:"<<coun<<" budg:"<<budg<<" sol:"<<sol<<endl;
	return dp[k][prev][coun][budg]=sol;

}
int main()
{
	cin>>k>>n>>m;

	while(k&&n&&m)
	{   memset(dp,-1000000009,sizeof(dp));
		for(i=1;i<=n;i++)
		{
			cin>>a[i][0]>>a[i][1];
		}
		double pp=solve(k,0,0,m);

		if(pp>=0)
			printf("%.1lf\n",pp);
		else 
			printf("0.0\n");
		int x=0,y=0,prev=0;
        int curr=0,coun=0,budg=m,mval=0;
        	if(pp>=0)
        	for(i=k;i>=1;i--)
        	{   double ma=0,tmp=100000000,cursol=0;
        		int val=0;

        		for(j=1;j<=n;j++)
        		{   
        			if(j==prev)
		            {
			            if(coun==2)
			            {
				            cursol=solve(i-1,j,coun,budg-a[j][0]);
			            }
			        if(coun==1)
			        {
				        cursol=solve(i-1,j,coun+1,budg-a[j][0])+0.5*a[j][1];
			        }
		        }
		        else
		        {
			        cursol=solve(i-1,j,coun+1,budg-a[j][0])+a[j][1];
		        }

        			if(ma<cursol)
        				{
        					ma=cursol;
        				    tmp=a[j][0];
        				    val=j;
        				}
        			else if(ma==cursol&&tmp>a[j][0])
        			{
        				tmp=a[j][0];
        				val=j;
        			}	
        		}
        		if(val==prev)
        		{
        			if(coun==1||coun==0)coun++;
        		}
        		else
        		{
        			coun=0;
        		}
        		cout<<val<<" ";
        		prev=val;
        		budg-=tmp;
        	}
        	cout<<endl;
        
     	cin>>k>>n>>m;
	}
}