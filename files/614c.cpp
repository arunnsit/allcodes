#include<iostream>
#include<algorithm>
#include<string.h>
#include<math.h>
#include<iomanip>
using namespace std;
struct node
{
	long  double x,y,dist;
	int nos;
};
bool cmp(node a,node b)
{
	return a.dist<b.dist;
}
node poins[100009]={0};
int main()
{
	int n,i,j,k,l;
	long  double a,b,c,X,Y,pi=3.1415926535897932384626,ekaur=0;
	cout<<fixed;
	cin>>n>>X>>Y;
	for(i=0;i<n;i++)
	{
		cin>>poins[i].x>>poins[i].y;
		poins[i].nos=i+1;
		poins[i].dist=(poins[i].x-X)*(poins[i].x-X)+(poins[i].y-Y)*(poins[i].y-Y);
	}
	sort(poins,poins+n,cmp);
	if(poins[0].dist==poins[1].dist&&(abs(poins[0].nos-poins[1].nos)==1||(poins[0].nos==1&&poins[1].nos==n)||(poins[0].nos==n&&poins[1].nos==1)))
	{
		ekaur=(poins[0].x-poins[1].x)*(poins[0].x-poins[1].x)+(poins[0].y-poins[1].y)*(poins[0].y-poins[1].y);
		ekaur/=4;
		poins[0].dist=poins[0].dist-ekaur;
	}

	cout<<setprecision(15)<<pi*(poins[n-1].dist-poins[0].dist)<<endl;

}

