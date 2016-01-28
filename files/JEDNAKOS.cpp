#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
char a[100000],b[10000],d[100000];
static int dp[7010][7050]={0},val=0,nmax,p[8050]={0};
int solve(int sum,int prev)
{   //cout<<"s:"<<sum<<"p:"<<prev<<endl;
	if(sum==0&&prev==nmax)return 0;
    if(prev>=nmax)return 99999999;
	if(dp[sum][prev]!=-1)return dp[sum][prev];
	int sol=99999999,x=0,u;
	for(int i=p[prev];i<nmax;i++)
	{
		x=x*10+d[i]-'0';
		u=i;
		if(x>sum)break;
		else sol=min(sol,solve(sum-x,u+1)+1);
	}
	return dp[sum][prev]=sol;
}
int main()
{
	scanf("%s",a);
	int i,k,j,l,m,n,o,c=0;
	for(i=0;a[i]!='\0';i++)
	{
		if(c==0&&a[i]=='0'){

		}
		else if(a[i]=='='){
			d[c]='\0';
			break;
		}
		else{
			d[c++]=a[i];
		}
	}
	nmax=c;

       
	c=0;
	i++;
	for(;a[i]!='\0';i++)
	{
			val=val*10+a[i]-'0';
	} 
        p[nmax - 1] = nmax - 1;
        for (int i = nmax - 2; i >= 0; --i) {
                p[i] = (d[i] == '0') ? p[i + 1] : i;
        }
       	for(i=0;i<=nmax+10;i++)
		for(j=0;j<=val+10;j++)dp[j][i]=-1;
	printf("%d\n",solve(val,0)-1);


}