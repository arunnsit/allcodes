//~  Inshaallah
/*
ID: omarmuh1
PROG: test
LANG: C++
*/
#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <ctime>
#include <iomanip>
#include <string.h>
#include <stdio.h>
#include <set>

using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define pob pop_back
#define pii pair<int ,int>
#define pil pair<int , ll>
#define pli pair<ll , int>
#define pll pair<ll , ll>
#define mid(x , y)	(x+y)/2
#define all(x) 	x.begin() , x.end()
#define maxn 	100007
#define sr		500
#define sz(x)	int(x.size())
#define INF 	1000000009
#define LLINF 	1000000000000000009
#define tr(i, c) for(typeof((c).begin()) i = (c).begin(); i!=(c).end(); i++)
#define Help_me  ios_base::sync_with_stdio(false);

template<class T> bool umin(T& a, T b) { if(a > b){ a = b;return 1;}return 0;}
template<class T> bool umax(T& a, T b) { if(a < b){ a = b;return 1;}return 0;}

//ifstream cin("test.in");
//ofstream cout("test.out");

int a , b , c , lp , cn , d[maxn] , n, m , C[maxn] , L , R , in[maxn] , out[maxn] , cl[maxn];
vector <int> E[maxn];
pair <pii , int> q[maxn];
ll p[maxn] , sum[maxn];

void dfs(int x , int y)
{
	in[x] = ++cn;
	C[cn] = d[x];
	
	for(int i = 0 ; i < sz(E[x]) ; i++)
		if(E[x][i] != y)
			dfs(E[x][i] , x);
	
	out[x] = cn;
}

bool cmc(pair <pii , int> x , pair <pii , int> y)
{
	if(x.ff.ff / sr != y.ff.ff / sr)
		return x.ff.ff / sr < y.ff.ff / sr;
	return x.ff.ss < y.ff.ss;
}

void add(int x)
{
	lp = max(lp , ++cl[C[x]]);
	
	sum[cl[C[x]]-1] -= C[x];
	sum[cl[C[x]]] += C[x];
}

void rem(int x)
{
	cl[C[x]]--;
	
	sum[cl[C[x]]+1] -= C[x];
	sum[cl[C[x]]] += C[x];
	
	if(sum[lp] == 0)
		lp--;
}

int main()
{
	scanf("%d" , &n);
	
	m = n;
	
	for(int i = 1 ; i <= n ; i++)	scanf("%d" , d + i);
	
	for(int i = 1 ; i < m ; i++)
	{
		scanf("%d%d" , &a , &b);
		
		E[a].pb(b);
		E[b].pb(a);
	}
	
	dfs(1 , 0);
	
	for(int i = 1 ; i <= m ; i++)
		q[i] = {{in[i] , out[i]} , i};
	
	sort(q + 1 , q + m + 1 , cmc);
	
	for(int i = 1 ; i <= m ; i++)
	{
		a = q[i].ff.ff , b = q[i].ff.ss , c = q[i].ss;
		
		while(R <= b)	add(R) , R++;
		while(R - 1 > b)	rem(R-1) , R--;
		while(L < a)	rem(L)	, L++;
		while(L > a)	add(L-1) , L--;
		
		p[c] = sum[lp];
	}
	
	for(int i = 1 ; i <= m ; i++)
		printf("%lld " , p[i]);
	puts("");
	return 0;
}