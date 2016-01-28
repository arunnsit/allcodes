#include<stdio.h>
#include<algorithm>
#include <cstdio>
#include <queue>
#include <vector>
#define MAX 200009
#define INF (1<<30)
#define pii pair< int, int >
#define pb(x) push_back(x)
 using namespace std;

struct comp {
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};
 


struct node{
	long long int u,v,val;

};
bool cmp(node a,node b)
{
	return a.val<b.val;
}
int find_parent(int x,int pa[200009])
{
	if(pa[x]==-1)return x;
	else return find_parent(pa[x],pa);
}
void make_union(int x,int y,int pa[200009])
{
	int px=find_parent(x,pa),py=find_parent(y,pa);
	if(px>py)pa[py]=px;
	else pa[px]=py;
} 
node a[200009];
int main()
{
	 
		long long int i,j,k,l,n,m,sz, nodes, edges, starting,u,v,w;
		long long int x,y,z;
		scanf("%lld %lld",&n,&m);
		for(i=0;i<m;i++)
			{
				scanf("%lld %lld %lld",&x,&y,&z);
				a[i].u=min(x,y);
				a[i].v=max(x,y);
				a[i].val=z;
			}
			starting =0;
		sort(a,a+m,cmp);
	    int pa[200009]={0};
        for(i=0;i<=n;i++)pa[i]=-1;
        long long int sumbyprims=0,e=0;
        for(i=0;i<m;i++)
        {
        	if(find_parent(a[i].u,pa)!=find_parent(a[i].v,pa)){
        		sumbyprims+=a[i].val;
        		e++;
        		make_union(a[i].u,a[i].v,pa);
        	}
        }
        printf("%lld\n",sumbyprims);
        
	

}