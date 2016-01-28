#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
struct node
{
	int start;
	int end;
};
bool cmp(node a,node b)
{
	return a.start<b.start;
}

node lis[100009];
static int coun[100009]={0},start[100009],dp[100009]={0},pos_min[100009]={0},mod=100000000;
int modadd(int a,int b)
{
	int c=a+b;
	while(c>=mod)c-=mod;
	return c;
}
int main()
{
	int n,i,j,k,l;
	scanf("%d",&n);
	while(n!=-1){
	memset(coun,0,sizeof(int)*100009);
	memset(start,0,sizeof(int)*100009);
	memset(dp,0,sizeof(int)*100009);
	memset(pos_min,0,sizeof(int)*100009);	
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&lis[i].start,&lis[i].end);
		start[i]=lis[i].start;
	}
	sort(lis,lis+n,cmp);
    sort(start,start+n);
    vector<int> v(start,start+n);
    vector<int>::iterator low,up;
    for(i=0;i<n;i++)
    {   
    	low=lower_bound(v.begin(),v.end(),lis[i].end);
    	coun[i]=v.end()-(low);
    	pos_min[i]=low-v.begin();
    }

    for(i=n-1;i>=0;i--){
    	dp[i]=(1+dp[pos_min[i]]+dp[i+1])%mod;
    }
    int nos=0,cpy=dp[0],x=dp[0];
    while(cpy)
    	{
    		cpy/=10;
    		nos++;
    }
    for(i=0;i<8-nos;i++)printf("0");	
    printf("%d\n",x);
	scanf("%d",&n);
    
    }

}
