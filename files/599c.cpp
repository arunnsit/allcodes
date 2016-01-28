#include<iostream>
#include<algorithm>
#include<math.h>
struct node{
	long double v;
	int no;
};
node a[100009];
bool cmp(node a,node b){
	return a.v<b.v;
}
using namespace std;
int main()
{
	long double pi= 314159.265358979323846,para,calc,y,x;
	int n,i,j,k;
	cin>>n;
    for(i=0;i<n;i++){
    	cin>>x>>y;
    	if(x>0&&y>0)a[i].v=atan(y/x)*100000;
    	else if(x<0&&y>0)a[i].v=pi-atan(-y/x)*100000;
    	else if(x<0&&y<0)a[i].v=atan(y/x)*100000+pi;
    	else if(x>0&&y<0)a[i].v=-atan(-y/x)*100000+2*pi;
    	else if(x==0&&y>0)a[i].v=pi/2;
    	else if(x==0&&y<0)a[i].v=3*pi/2;
    	else if(y==0&&x>=0)a[i].v=0;
    	else if(y==0&&x<0)a[i].v=pi;
    	a[i].no=i+1;
    	//cout<<"angle:"<<a[i].v<<endl;
    }
    sort(a,a+n,cmp);
   long double minval=370000090;
    int pair=0;
    for(i=1;i<n;i++)if(a[i].v-a[i-1].v<minval){
    	minval=a[i].v-a[i-1].v;
    	pair=i;
    }
    if(2*pi-a[n-1].v+a[0].v<minval){
    	minval=a[i].v-a[i-1].v;
    	cout<<a[n-1].no<<" "<<a[0].no;
    }
    else cout<<a[pair].no<<" "<<a[pair-1].no;
    cout<<endl;



}