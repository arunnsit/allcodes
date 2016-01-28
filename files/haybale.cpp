#include<iostream>
#include<algorithm>
#define N 1000009
using namespace std;
int arr[N]={0};
int main()
{
	int n,k,i,j,p,x,y;
	cin>>n>>k;
	while(k--)
	{
		cin>>x>>y;
		arr[x]++;
		arr[y+1]--;
	}
	for(i=1;i<=n;i++)
	{
		arr[i]+=arr[i-1];
		//cout<<arr[i]<<" ";
	}
	sort(arr+1,arr+n+1);
	cout<<arr[n/2+1]<<endl;



}