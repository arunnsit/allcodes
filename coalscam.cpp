#include<stdio.h>
#include<algorithm>
using namespace std;
struct node{
	long long int u;
	long long int v;
	long long int val;
};
node a[200003],b[200003];
bool cmp(node a,node b){
	return a.val<b.val;
}
bool cmp2(node a,node b){
	return a.val>b.val;
}
long long int find(long long int x,long long int cp[500008])
{
if(cp[x]==-1)return x;
return find(cp[x],cp);
}
void uni(long long int x,long long int y,long long int cp[500008]){
	long long int px=find(x,cp),py=find(y,cp);
	if(px>py)cp[py]=px;
	else cp[px]=py;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,m1,m2,i,j,k,l,coun=0,p,q,r;
		scanf("%lld %lld %lld",&n,&m1,&m2);
		for(i=0;i<m1;i++){scanf("%lld %lld %lld",&p,&q,&r);
			a[i].u=min(p,q);
		    a[i].v=max(p,q);
		    a[i].val=r;}
        for(i=0;i<m2;i++){scanf("%lld %lld %lld",&p,&q,&r);
			b[i].u=min(p,q);
		    b[i].v=max(p,q);
		    b[i].val=r;}
        sort(a,a+m1,cmp);
        sort(b,b+m2,cmp2);
        long long int x=0,y=0,v[5003]={0},c=0;
        long long int cp[500008];
        for(i=0;i<500007;i++)cp[i]=-1;

        for(i=0;i<m2;i++){
        	if(find(b[i].u,cp)!=find(b[i].v,cp))
        	{
        	    x+=b[i].val;
        	    c++;
                uni(b[i].u,b[i].v,cp);
        	}
	}
	y=x;

	for(i=0;i<m1;i++){
		if(find(a[i].u,cp)!=find(a[i].v,cp))
		    {
        	    y+=a[i].val;
        	    c++;
        	    uni(a[i].u,a[i].v,cp);
        	}

	}
	if(c==n-1)printf("%lld %lld\n",x,y);
	else printf("Impossible\n");

        }

}