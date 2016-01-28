#include<iostream>
#include<algorithm>
using namespace std;
long long int arr[100006][50]={0};
long long int n[100],maxsum[100]={0};
int main()
{   
	std::ios::sync_with_stdio(false);
	int t,o;
	cin>>t;
	for( o=1;o<=t;o++)
	{
		cin>>n[o]>>maxsum[o];
		for(int i=1;i<=n[o];i++)
			cin>>arr[i][o];
	}
	for(o=1;o<=t;o++)
	{
		
		long long int sol=0,cursum=0;
		int i,j,k,x,y;
		x=0;
		y=1;
		cursum=arr[1][o];
		while(y!=n[o]+1)
		{
			if(cursum<=maxsum[o])
			{
				sol+=y-x;
				y++;
				cursum+=arr[y][o];
			}
			else if(cursum>maxsum[o])
			{
				x++;
				cursum-=arr[x][o];
			}
		}
		cout<<"Case #"<<o<<": "<<sol<<endl;
	}
}