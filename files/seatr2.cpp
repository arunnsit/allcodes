#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string.h>
using namespace std;
static int f[605][20505]={0};
 static int m;
 static int mod=1000000007;
vector<int> v[502];
inline int md(int a,int b)
{
	long long int c=a+b;
	while(c>=mod)c-=mod;
	return (int)c;
	
}
inline void scanint(int &n) {
	n = 0;
	int ch = getchar_unlocked();
	int sign = 1;
	while (ch < '0' || ch > '9') {
		if (ch == '-')
			sign = -1;
		ch = getchar_unlocked();
	}
	while (ch >= '0' && ch <= '9')
		n = (n << 3) + (n << 1) + ch - '0', ch = getchar_unlocked();
	n = n * sign;
}
inline void print_int(int N)
{
    register int ctr=0;
    char buffer[12];
    do
    {
        buffer[ctr++]=N%10 +48;
        N/=10;
    }while(N);
    ctr--;
    while(ctr>=0)
        putchar_unlocked(buffer[ctr--]);
    putchar_unlocked('\n');
}
inline int pr(int a,int b)
{
	long long int c=a*b;
	while(c>=mod)c-=mod;
	return (int)c;
	
}
 inline int solve(int start,int k,int par)
{   
	if(f[start][k]!=-1)return f[start][k];
	int x=1,y=0;
	for(int i=0;i<v[start].size();i++)
		if(v[start][i]!=par){ y=0;
			for(int j=1;j*k<=m;j++)y=md(y,solve(v[start][i],j*k,start));
		  x=pr(x,y);		
		}		
     f[start][k]=x;
    // printf("s:%d k:%d sol:%lld\n",start,k,f[start][k]);	
	return f[start][k];	
}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{   
          

		int n,o,k,l;
		scanint(n);
		scanint(m);
		int i,j,x,y;
		for(i=0;i<=n+100;i++)
			for(j=0;j<=m+100;j++)f[i][j]=-1;
		for(i=0;i<n-1;i++){
			scanint(x);
		    scanint(y);
			v[x].push_back(y);
			v[y].push_back(x);
		}
		int xp=0;
		for(i=1;i<=m;i++)
		xp=md(xp,solve(1,i,-1));
	    printf("%d\n",xp);
	    for(i=0;i<=n;i++)v[i].clear();
	}
}