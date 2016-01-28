#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<string.h>
using namespace std;
struct node
{
	long long int x,y,dist1,dist2;
};
node in[5];
int main()
{
	int i,j,k,l,m,n;
	cin>>in[0].x>>in[0].y;
    cin>>in[1].x>>in[1].y;
    cin>>in[2].x>>in[2].y;
    long long int arr[3],slope[3];
    arr[0]=(in[0].x-in[1].x)*(in[0].x-in[1].x)+(in[0].y-in[1].y)*(in[0].y-in[1].y);
    arr[1]=(in[2].x-in[1].x)*(in[2].x-in[1].x)+(in[2].y-in[1].y)*(in[2].y-in[1].y);
    arr[2]=(in[0].x-in[2].x)*(in[0].x-in[2].x)+(in[0].y-in[2].y)*(in[0].y-in[2].y);
    
    if(in[0].x-in[1].x==0)
    slope[0]=0;
    else if((in[0].y-in[1].y)==0)
    slope[0]=1;
    else slope[0]=2;

    if(in[0].x-in[2].x==0)
    slope[1]=0;
    else if((in[0].y-in[2].y)==0)
    slope[1]=1;
    else slope[1]=2;

    if(in[1].x-in[2].x==0)
    slope[2]=0;
    else if((in[1].y-in[2].y)==0)
    slope[2]=1;
    else slope[2]=2;

   // cout<<slope[0]<<" "<<slope[1]<<" "<<slope[2]<<endl;
    sort(arr,arr+3);
    if((in[0].x==in[1].x&&in[1].x==in[2].x)||(in[0].y==in[1].y&&in[1].y==in[2].y))
    	{
    		cout<<1;
    		return 0;
    	}
    else if(arr[2]==arr[1]+arr[0]&&((slope[0]==0&&slope[1]==1)||(slope[1]==0&&slope[0]==1)||(slope[1]==0&&slope[2]==1)||(slope[2]==0&&slope[1]==1)||(slope[0]==0&&slope[2]==1)||(slope[2]==0&&slope[0]==1)))
    	{
    		cout<<2;
    		return 0;
    	}
    else if((slope[0]==0&&((in[2].x>=in[1].x&&in[2].x>=in[0].x)||(in[2].x<=in[0].x&&in[2].x<=in[1].x)))||(slope[1]==0&&((in[1].x>=in[0].x&&in[1].x>=in[2].x)||(in[1].x<=in[2].x&&in[1].x<=in[0].x)))||(slope[2]==0&&((in[0].x>=in[1].x&&in[0].x>=in[2].x)||(in[0].x<=in[2].x&&in[0].x<=in[1].x)))||(slope[0]==1&&((in[2].y>=in[1].y&&in[2].y>=in[0].y)||(in[2].y<=in[0].y&&in[2].y<=in[1].y)))||(slope[1]==1&&((in[1].y>=in[0].y&&in[1].y>=in[2].y)||(in[1].y<=in[2].y&&in[1].y<=in[0].y)))||(slope[2]==1&&((in[0].y>=in[1].y&&in[0].y>=in[2].y)||(in[0].y<=in[2].y&&in[0].y<=in[1].y))))
    {
        cout<<2;
            return 0;

    }    
    else cout<<3;
}